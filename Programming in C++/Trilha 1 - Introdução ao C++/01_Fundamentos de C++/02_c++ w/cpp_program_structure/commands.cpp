
-- Run your code in the folder projects/cpp_program_structure

-- Run using the terminal within VS code (below the code)

-- Open up an empty cpp_program_structure.cpp file and paste in this code


------------------------------------

-- Show and run the code below

# @Vitthal please note that this demo is much shorter than the corresponding demo in C
# because we assume that they know some of C (if not everything)


# Explain the cout command

# C++ comes with libraries that provide us with many ways for performing input and output. In C++ 
# input and output are performed in the form of a sequence of bytes or more commonly known as streams.

# Input Stream: If the direction of flow of bytes is from the device(for example, Keyboard) to the 
# main memory then this process is called input.
# Output Stream: If the direction of flow of bytes is opposite, i.e. from main memory to device
# (display screen) then this process is called output.

# Standard output stream (cout): Usually the standard output device is the display screen. 
# Stream output allows you to write to an output device as a stream

# The C++ cout statement is the instance of the ostream class. It is used to produce output 
# on the standard output device which is usually the display screen. The data needed to be 
# displayed on the screen is inserted in the standard output stream (cout) using the insertion operator(<<).

# read "std" as "stood"
# Briefly explain namespaces (just a name for all the functions, classes, utilities in a library)
# Good libraries always come within namespaces
# Briefly explain the scope resolution operator
# 

# -- cpp_program_structure_v01.cpp


#include <iostream>

int main()
{
  std::cout << "Hello C++ World!" << std::endl;

  return 0;
}


-- Run the code and show the output


--------------------------------------
# -- cpp_program_structure_v02.cpp

-- Change the code to use the "std" namespace
-- Here you are telling C++ each time you see cout look for it in the std namespace


#include <iostream>

using namespace std;

int main()
{
  cout << "Hello C++ World!" << endl;

  return 0;
}


-- Run and show that it works

--------------------------------------
# -- cpp_program_structure_v03.cpp

// -- A better way to indicate what identifiers you are using from the namespace is to explicitly specify those operators
// -- Then you are  not bringing in everything from a namespace and you are indicating clearly what you're using from a namespace

#include <iostream>

using std::cout;
using std::endl;

int main()
{
  cout << "Hello C++ World!" << endl;

  return 0;
}

-- Run and show that it works


--------------------------------------

-- The << is the special insertion operator in C++
-- Changing the operator results in a compile error

  cout < "Hello C++ World!" < endl;


-- Build the code and show the error (scroll to the top)




--------------------------------------

-- cout is defined in iostream

-- Change the code as shown below

using std::cout;
using std::endl;

int main()
{
  cout << "Hello C++ World!" << endl;

  return 0;
}


-- Build and show the error

--------------------------------------

-- C++ standard specifies that the library include files should not have extensions

-- Change the code as shown below

// # In standard C++, library headers are not supposed to have the .h extension. So the following is correct:

// #include <iostream>

// # With most implementations writing <iostream.h> would also work, but the version without an extension is actually correct. The C++ standard library was able to drop extensions in C++98 due to the introduction of namespaces, and introduction of the std namespace for the standard library.

// # The C++ standard neither requires nor forbids an extension for other headers, so it's entirely up to the authors of some software what file extension to use, if any. The most common choices are to use .h or .hpp, the latter being intended to distinguish C++ headers from C headers.


#include <iostream.h>

using std::cout;
using std::endl;

int main()
{
  cout << "Hello C++ World!" << endl;

  return 0;
}


-- Build and show the error
















