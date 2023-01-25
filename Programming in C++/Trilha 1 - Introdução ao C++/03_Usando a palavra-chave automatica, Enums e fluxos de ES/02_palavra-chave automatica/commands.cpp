
-- Run your code in the folder projects/auto

-- Run using the terminal within VS code (below the code)

-- Open up an empty auto.cpp file and paste in this code


------------------------------------

-- Show and run the code below

# -- auto_v01.cpp

// You use the auto keyword to indicate that the compiler should deduce the type. The compiler will deduce the types for m, n, and pi from the initial values you supply. You can use functional or assignment notation with auto for the initial value as well

// Having said that, this is not really how the auto keyword is intended to be used. Typically, when defining variables of fundamental types, you might as well specify the type explicitly so you know for sure what it is. 

// The auto keyword is best used for complex types where the types might change in the future or where the types are not important e.g. range-for loops (this is the foreach loop in Java)

// The auto keyword will NOT perform any conversion


#include <iostream>
#include <typeinfo>

using std::cout;
using std::endl;

int main()
{
  auto int_var = 20;
  auto long_var = 24567L;
  
  auto float_var {12344.5F};
  auto double_var(23098.456);

  auto string_var = "Hello world!";

  cout << "Type of integer variable: " << typeid(int_var).name() << endl;
  cout << "Type of long variable: " << typeid(long_var).name() << endl;
  cout << "Type of float variable: " << typeid(float_var).name() << endl;
  cout << "Type of double variable: " << typeid(double_var).name() << endl;
  cout << "Type of string variable: " << typeid(string_var).name() << endl;

  return 0;
}

-- Before you run the code hover over each of the variables and show that the IDE has correctly interpreted the type of each variable
-- Run this code using this command

./auto

-- The output will look like this

Type of integer variable: i
Type of long variable: l
Type of float variable: f
Type of double variable: d
Type of string variable: PKc // pointer to constant char

// The return of name is implementation defined : an implementation is not even required to return different strings for different types. What you get from the compiler is a decorated name, that you can "demangle" using the c++filt command


-- Now run this code like this

./auto | c++filt -t


-- The output will give you the demangled name

Type of integer variable: int
Type of long variable: long
Type of float variable: float
Type of double variable: double
Type of string variable: char const*

------------------------------------

-- Show and run the code below

# -- auto_v02.cpp

// The ' is just a digit separator to make the number easier to read for humans
// The number is too large for an integer so the compiler deduces a long for that number
// The ' was introduced in C++14, it does not mean anything but helps readability and can be placed pretty much anywhere in teh number


int main()
{
  auto char_var = 'a';
  auto long_var = 2'000'000'000'000'000;

  cout << "Type of char variable: " << typeid(char_var).name() << endl;
  cout << "Type of long variable: " << typeid(long_var).name() << endl;

  return 0;
}



./auto | c++filt -t
Type of char variable: char
Type of long long variable: long



------------------------------------

-- Show and run the code below

# -- auto_v03.cpp

int main()
{
  auto int_var = 20;
  auto long_var = 24567L;
  
  auto float_var {12344.5F};
  auto double_var(23098.456);

  auto result = ((int_var * long_var) + double_var) / float_var;

  cout << "Type of result variable: " << typeid(result).name() << endl;

  return 0;
}


-- Run the code like this

./auto | c++filt -t



























































