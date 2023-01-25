
Ensure G++ is installed
---------------------------

# GNU C++ Compiler ( g++ ) is a compiler in Linux which is used to compile C++ programs. 
# It compiles both files with extension . c and . cpp as C++ files. The following is the compiler 
# command to compile C++ program.

=> Run to show that g++ is not installed on the Mac

		g++ --version

=> Do the same recording as you have starting from 5:52 of your windows recording

=> Go to mysys2.org and download from there

=> Do the $PATH set up as in the recording

=> Once you are back in the command line run and show g++ installed

g++ --version


Now set up VS Code as in the recording
--------------------------------------

-- Do the same recording as in your windows installation from 00 - 5:00


=> Make sure you are in Desktop/
	
mkdir projects

cd projects

mkdir installation

cd installation


=> open VS Code in that folder by entering the following command

		code .

The code . command opens VS Code in the current working folder, which becomes your "workspace".


Compiling and executing code
-----------------------------

=> In the left navigation pane click on the "+" icon and create a new file called hello_world.cpp

-- Paste this code into the file

#include <iostream>

int main()
{
  
  std::cout << "Hello World!" << std::endl;

  return 0;
}


-- From the top navigation pane go to Terminal -> New Terminal 
-- This will open up a terminal window at the bottom of the screen in your current workspace

-- Within this terminal window

ls -l

-- Should only have hello_world.cpp

g++ hello_world.cpp

ls -l

./a.out


-- Now run this

g++ hello_world.cpp -o hello_world

./hello_world

























