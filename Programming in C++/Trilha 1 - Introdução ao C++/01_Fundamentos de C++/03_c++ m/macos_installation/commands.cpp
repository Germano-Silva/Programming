

Ensure Clang is installed
---------------------------

=> The first two steps below (Clang and xcode install you can simply get from the C recordings that Nishan has done). He starts with clang not installed on the Mac. Just splice that in

=> Run to show that clang is not installed on the Mac

		clang --version

=> Install Xcode developer tools on the Mac to get clang

		xcode-select --install

------------------- Your recording will start from here

=> Once you have clang installed go back to the terminal window and run

		clang++


Setting up C++ and the Visual Studio Code IDE
-----------------------------------------------

=> Install Visual Studio Code on macOS.

=> Install the C++ extension for VS Code. You can install the C/C++ extension by searching for 'c++' in the Extensions view 


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

clang++ hello_world.cpp

ls -l

./a.out


-- Now run this

clang++ hello_world.cpp -o hello_world

./hello_world































