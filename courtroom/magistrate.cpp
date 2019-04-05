#include "magistrate.h"
#include <fruit/fruit.h>
#include <iostream>

class MagistrateImpl : public Magistrate
{
  public:
    INJECT(MagistrateImpl()) : findsAccusedGuilty_(false), jailSentence_(false), sentenceLength_(0), agreesWithObjection_(false) {}

    virtual void giveVerdict() override
    {
        if (findsAccusedGuilty_)
        {
            std::cout << "The Court finds the Accused Guilty." << std::endl;
            std::cout << "The Accused is sentenced to " << giveSentenceLength() << giveSentenceType() << std::endl;
        }
        else
        {
            std::cout << "The Court finds the Accused Not Guilty." << std::endl;
        }
    };

    virtual void giveRuling() override
    {
        if (agreesWithObjection_)
        {
            std::cout << "The Magistrate sustains the objection." << std::endl;
        }
        else
        {
            std::cout << "The Magistrate overrules the objection." << std::endl;
        }
    };

  private:
    bool findsAccusedGuilty_;
    bool jailSentence_;
    int sentenceLength_;
    bool agreesWithObjection_;

    virtual std::string giveSentenceType() override
    {
        if (jailSentence_)
        {
            return "years in Prison.";
        }
        else
        {
            return "months of Community Service.";
        }
    };

    virtual int giveSentenceLength() override
    {
        return sentenceLength_;
    }
};

fruit::Component<Magistrate> getMagistrateComponent()
{
    return fruit::createComponent().bind<Magistrate, MagistrateImpl>();
}