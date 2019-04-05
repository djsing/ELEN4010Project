# Follow these instructions to build Fruit as a CMake project.
# This project was completed using MinGW64
# Download Fruit 3.4.0 from https://github.com/google/fruit/releases
# Extract the folder and open command line.
# Enter the following:

mkdir BUILDTEMP
cd BUILDTEMP
cmake-gui..

# When the GUI appears:
# Click "Configure"

# When asked to specify the generator for this project,
# select "MinGW Makefiles"
# check the "Use default native compilers" option

# After the GUI has	loaded, make the following changes:
# Uncheck the FRUIT_USES_BOOST flag box.
# Uncheck the BUILD_SHARED_LIBS flag box.

# Take note of the CMAKE_INSTALL_PREFIX path, 
# as this is where Fruit will be installed to.

# Go back to the command line and enter the following:

make 
make install

# Navigate to the CMAKE_INSTALL_PREFIX that you noted earlier,
# and you will find Fruits "include" and "lib" folder.

# By default the installation paths are C:\Program Files (x86)\Fruit\include
# and C:\Program Files (x86)\Fruit\lib

# __________________________________________________________________________

# To compile the Courtroom executable:

# Open the "courtroom" folder.

# Go to the Fruit 'lib' install directory above
# and copy "libfruit.a" into the "courtroom" folder.

# Open command line in the root folder "courtroom".

# enter the following command:
	
	g++ -o courtroom *.cpp --std=c++11 libfruit.a -I PATHTOHEADERFILES
	
# (Where PATHTOHEADERFILES is where Fruits header files are installed)

# For simplicity, you can copy the \include folder from the installation
# path to your "courtroom" folder and the command would be the following:

	g++ -o courtroom *.cpp --std=c++11 libfruit.a -I .\include
	
#The executable is now available to open.
