
-- Run your code in the folder projects/numeric_and_char_types

-- Run using the terminal within VS code (below the code)

-- Open up an empty numeric_and_char_types.cpp file and paste in this code


------------------------------------

Integers
--------

-- Show and run the code below

# -- numeric_and_char_types_v01.cpp

#include <iostream>

using std::cout;
using std::endl;

int main() 
{
	cout << "Size of int is " << sizeof(int) << " bytes." <<  endl;

	int positive_int_extreme = 2147483647;
	
	int negative_int_extreme = -2147483648;

	cout << "Signed int values can range between: " 
       << negative_int_extreme << " to " << positive_int_extreme << endl;

	return 0;
}


------------------------------------

-- Show and run the code below

# -- numeric_and_char_types_v02.cpp

int main() 
{
	cout << "Size of int is " << sizeof(int) << " bytes." <<  endl;

	int positive_int_extreme = 2147483647;
	int negative_int_extreme = - 2147483648;

	cout << "Signed int values can range between: " 
       << negative_int_extreme << " to " << positive_int_extreme << endl;

	positive_int_extreme = 2147483648; // 2147483647+1
	negative_int_extreme = -2147483649; // -2147483648-1
	
	cout << "If we exceed the range the results are strange : " 
       << negative_int_extreme << " to " << positive_int_extreme << endl;
	cout << "This results in a long to int conversion." << endl;
	return 0;
}


------------------------------------

-- Show and run the code below

# -- numeric_and_char_types_v03.cpp

int main() 
{
	cout << "Size of unsigned int is " << sizeof(unsigned int) << " bytes." <<  endl;

	unsigned int low_val = 0;
	unsigned int high_val = 4294967295; // 2147483647 + 2147483648

	cout << "Unsigned int values can range between: " 
		 << low_val << " to " << high_val << endl;
	
	return 0;
}


------------------------------------

-- Show and run the code below

# -- numeric_and_char_types_v04.cpp

int main() 
{
	cout << "Size of short is " << sizeof(short int) << " bytes." <<  endl;
	cout << "Size of long is " << sizeof(long int) << " bytes." <<  endl;
	cout << "Size of long long is " << sizeof(long long int) << " bytes." <<  endl;

	return 0;
}


=> The choices made by each implementation about the sizes of the fundamental types are collectively known as data model. For 32 and 64 bit there are 4 data models that are widely accepted (you do not need to mention all of the details below that is just for your reference)

// 32 bit systems:

// LP32 or 2/4/4 (int is 16-bit, long and pointer are 32-bit)
// Win16 API
// ILP32 or 4/4/4 (int, long, and pointer are 32-bit);
// Win32 API
// Unix and Unix-like systems (Linux, macOS)

// 64 bit systems:

// LLP64 or 4/4/8 (int and long are 32-bit, pointer is 64-bit)
// Win64 API
// LP64 or 4/8/8 (int is 32-bit, long and pointer are 64-bit)
// Unix and Unix-like systems (Linux, macOS)

------------------------------------

-- Show and run the code below

# -- numeric_and_char_types_v05.cpp

// Why isn’t the size of the integer variables fixed?

// The short answer is that this goes back to C, when computers were slow and performance was of the utmost concern. C opted to intentionally leave the size of an integer open so that the compiler implementers could pick a size for int that performs best on the target computer architecture.


// This no longer applies to modern machines. As a programmer, it’s a little ridiculous to have to deal with types that have uncertain ranges

// To address the above issues, C99 defined a set of fixed-width integers (in the stdint.h header) that are guaranteed to be the same size on any architecture.

// C++ officially adopted these fixed-width integers as part of C++11. They can be accessed by including the <cstdint> header, where they are defined inside the std namespace. Here’s an example:

// Two problems with fixed width ints

// First, the fixed-width integers are not guaranteed to be defined on all architectures. They only exist on systems where there are fundamental types matching their widths and following a certain binary representation. Your program will fail to compile on any such architecture that does not support a fixed-width integer that your program is using. However, given that most modern architectures have standardized around 8/16/32/64-bit variables, this is unlikely to be a problem unless your program needs to be portable to some exotic mainframe or embedded architectures.


// Second, if you use a fixed-width integer, it may be slower than a wider type on some architectures. For example, if you need an integer that is guaranteed to be 32-bits, you might decide to use std::int32_t, but your CPU might actually be faster at processing 64-bit integers. However, just because your CPU can process a given type faster doesn’t mean your program will be faster overall -- modern programs are often constrained by memory usage rather than CPU, and the larger memory footprint may slow your program more than the faster CPU processing accelerates it. It’s hard to know without actually measuring.


using std::cout;
using std::endl;
using std::int8_t;
using std::int16_t;
using std::int32_t;
using std::int64_t;
	
int main() 
{
	cout << "Int sizes can be enforced by using fixed width int types" << endl;
	cout << "8-bit: " << sizeof(int8_t) << " byte." << endl;
	cout << "16-bit: " << sizeof(int16_t) << " bytes." << endl;
	cout << "32-bit: " << sizeof(int32_t) << " bytes." << endl;
	cout << "64-bit: " << sizeof(int64_t) << " bytes." << endl;
	
	return 0;
}


------------------------------------

-- Show and run the code below

# -- numeric_and_char_types_v06.cpp


using std::cout;
using std::endl;
	
int main() 
{
	cout << "binary 1010 is " << 0b1010 << " in decimal." << endl;
	cout << "octal 23 is " << 023 << " in decimal." <<  endl;
	cout << "hexadecimal 11a is " << 0x11a << " in decimal." <<  endl;

	return 0;
} 


------------------------------------

-- Show and run the code below

// float -> single precision
// double -> double precision
// long double -> extended precision

// => Floating-point literals are double precision by default. If you need single precision, use an f or F suffix; for extended precision, use l or L


# -- numeric_and_char_types_v07.cpp


int main() 
{
	cout << "Size of float is " << sizeof(float) << " bytes." <<  endl;
	cout << "Size of double is " << sizeof(double) << " bytes." <<  endl;
	cout << "Size of long double is " << sizeof(long double) << " bytes." <<  endl;
	
	float balance = 1000.64F;
	double earths_gravity = 9.807;
	long double plancks_constant = 6.62607004e-34L;
  
	cout << endl <<	"Balance: " << balance << endl;
	cout << "Earth's gravity: " << earths_gravity << endl;
	cout << "Planck's constant: " << plancks_constant << endl;
	
	return 0;
}



------------------------------------

-- Show and run the code below

-- A character literal is a single, constant character and is surrounded by single quotes ''.

# -- numeric_and_char_types_v08.cpp

int main()
{
	cout << "The size of char is: " << sizeof(char) << " byte." << endl;
		
	char lowercase_vowel = 'a';
	char uppercase_vowel = 'A';

	cout << "The lowercase vowel is: " << lowercase_vowel << endl;
	cout << "The uppercase vowel is: " << uppercase_vowel << endl;

	return 0;
}



------------------------------------

-- Show and run the code below

-- ASCII Characters are just integers exactly like in C

-- Just change the declaration of the character to int

	int lowercase_vowel = 'a';
	int uppercase_vowel = 'A';



------------------------------------

-- Show and run the code below
-- Characters can be non-printable escape characters
-- Escape characters can be used to print out special characters like "\"" and '"' to screen


int main()
{
	
	char newline = '\n';
	char tab_horizontal = '\t';
	char tab_vertical = '\v';

	cout << "I" 
		 << newline << " solemnly" 
		 << tab_horizontal << " swear" 
		 << tab_vertical << "that, \n I \v am \\ upto no \" good" << endl;

	return 0;
}



































































