
-- Run your code in the folder projects/strings

-- Run using the terminal within VS code (below the code)

-- Open up an empty strings.cpp file and paste in this code


------------------------------------

-- Show and run the code below

-- Show that C-style strings still work in C++
-- Note the use of the #include <cstdio> and #include <cstring> for printf ans strlen (this is how you include C libraries)

# -- strings_v01.cpp


#include <cstdio>
#include <cstring>

int main()
{
  char* proverb_1 = "A bad workman always blames his tools";
  char proverb_2[60] = "A journey of thousand miles begins with a single step";

  printf("Here is a C-style string: %s\n", proverb_1);
  printf("Length of the first string: %lu\n", strlen(proverb_1));

  printf("Here is another C-style string: %s\n", proverb_2);
  printf("Length of the second string: %lu\n", strlen(proverb_2));

  return 0;
}


-- Building the code should result in a warning

ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]

-- Reason for this warning here (note the answer with the check mark)

// IMPORTANT LINK:
// https://stackoverflow.com/questions/20944784/why-is-conversion-from-string-constant-to-char-valid-in-c-but-invalid-in-c/20944858

------------------

-- Here is one way you could fix the warning


  char* proverb_1 = (char *) "A bad workman always blames his tools";

-- Compile and show the warning has disappeared

-- The explicit conversion silences the warning but you have actually changed this from a pointer to a constant to a pointer to non-constant

------------------

-- Let us fix the warning (this is the right way)
-- Change just one line in the code

const char* proverb_1 = "A bad workman always blames his tools";


-- Compile and run and show the warning has disappeared
-- The string literal is a constant and should be stored in a pointer to constant (cannot change modify the string, can modify the pointer)


-----------------------------------------------------------------------------

# -- strings_v02.cpp

-- Drawbacks with C-style strings

// The cstring header provides a wide range of functions for working with C-style strings including capabilities for joining strings, searching a string, and comparing strings. All these operations depend on the null character being present to mark the end of a string. If it is missing or gets overwritten, many of these functions will march happily through memory beyond the end of a string until a null character is found at some point or some catastrophe stops the process. Even if your process survives, it often results in memory being arbitrarily overwritten. And once that happens, all bets are off! Using C-style strings is therefore inherently unsafe and represents a serious security risk.

-- C++ style strings

// The string header of the C++ Standard Library defines the std::string type, which is much easier to use than a null-terminated string. The string type is defined by a class (or to be more precise, a class template), so it isn’t one of the fundamental types. Type string is a compound type, which is a type that’s a composite of several data items that are ultimately defined in terms of fundamental types of data. Next to the characters that make up the string it represents, a string object contains other data as well, such as number of characters in the string.

// Internally, the character array encapsulated by a string object is always terminated by a null character as well. This is done to assure compatibility with the numerous existing functions that expect C-style strings.

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
  string proverb_1 = "A bad workman always blames his tools";
  string proverb_2 {"A journey of thousand miles begins with a single step"};
  string empty_string;

  cout << "C++ style string: " << proverb_1 << endl;
  cout << "Another C++ style string: " << proverb_2 << endl;
  cout << "Empty string: " << empty_string << endl;

  return 0;
}


-----------------------------------------------------------------------------

# -- strings_v03.cpp

-- Compile and run the code
-- Converting C++ style strings to C-style strings

// this conversion results in a C-string of type const char*. Because it’s const, this pointer cannot be used to modify the characters of the string, only to access them. 

// Your second option is the string’s data() function, which starting from C++17 evaluates to a non-const char* pointer1 (prior to C++17, data() resulted in a const char* pointer as well):

int main()
{
  string proverb_1 = "A bad workman always blames his tools";
  string proverb_2 {"A journey of thousand miles begins with a single step"};

  const char* proverb_1_cstr = proverb_1.c_str();
  char* proverb_2_cstr_nonconst = proverb_2.data();

  cout << "C-style string: " << proverb_1_cstr << endl;
  cout << "Another C-style string: " << proverb_2_cstr_nonconst << endl;

  return 0;
}


---------------

-- Add these two lines below the cout statements

  proverb_1_cstr[0] = 'a';
  proverb_2_cstr_nonconst[0] = 'a';

-- Compile the code and show the error

error: read-only variable is not assignable

  proverb_1_cstr[0] = 'a';
  ~~~~~~~~~~~~~~~~~ ^

1 error generated


-----------------------------------------------------------------------------

# -- strings_v04.cpp

-- Compile and run the code
-- Other initialization techniques

int main()
{
  string proverb_1 = "A bad workman always blames his tools";
  
  // Initalize one string with the contents of another string
  string proverb_2 {proverb_1};

  // Initialize with 11 characters starting at index 2
  string proverb_part {proverb_1, 2, 11};

  // Repeat the character 's' 10 times
  string repeated_s(10, 's');

  cout << "proverb_1: " << proverb_1 << endl;
  cout << "proverb_2: " << proverb_2 << endl;
  cout << "proverb_part: " << proverb_part << endl;
  cout << "repeated_s " << repeated_s << endl;

  return 0;
}




































































































































































































