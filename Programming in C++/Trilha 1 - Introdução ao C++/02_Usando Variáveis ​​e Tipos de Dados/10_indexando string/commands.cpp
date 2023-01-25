
-- Run your code in the folder projects/string_operators

-- Run using the terminal within VS code (below the code)

-- Open up an empty string_operators.cpp file and paste in this code


------------------------------------
# -- string_operators_v01.cpp

-- Show and run the code below

-- using the operator[] to access characters in a string
-- accessing out of range characters results in undefined behavior (in our case nothing is printed to screen)
// https://stackoverflow.com/questions/25687891/string-out-of-range-c

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
  string proverb = "The harder you work, the luckier you get.";

  cout << "First character: " << proverb[0] << endl;
  cout << "Character at index 21: " << proverb[21] << endl;
  cout << "Last character: " << proverb[proverb.length() - 1] << endl;

  cout << "Character at out of range index: " << proverb[proverb.length() + 10] << endl;

  return 0;
}



------------------------------------
# -- string_operators_v02.cpp

-- Show and run the code below


int main()
{
  string proverb = "The harder you work, the luckier you get.";

  cout << "Original string: " << proverb << endl;

  proverb[1] = 'H';
  proverb[2] = 'E';

  cout << "Updated string: " << proverb << endl;

  return 0;
}



------------------------------------
# -- string_operators_v03.cpp

-- Show and run the code below
-- Using the + operator to concatenate strings

int main()
{
  string part_1 = "When one door shuts";
  string part_2 = "another opens";

  string proverb = part_1 + part_2;

  cout << "Concatenated string: " << proverb << endl;

  return 0;
}


-----------

-- Can also concatenate string literals using +
-- Run and show

int main()
{
  string part_1 = "When one door shuts";
  string part_2 = "another opens";

  string proverb = part_1 + " " + part_2;

  cout << "Concatenated string: " << proverb << endl;

  return 0;
}




------------------------------------
# -- string_operators_v03.cpp

-- Show and run the code below
-- Can concatenate characters and also use the += assignment operator

// 


int main()
{
  string proverb;

  string part_1 = "When one door shuts";
  string part_2 = "another opens";

  proverb += part_1 + ' ' + part_2;

  cout << "Concatenated string: " << proverb << endl;

  return 0;
}


-------------------------------------------------------

# -- string_operators_v04.cpp

-- Concatenation using operators will not work if the operands are string literals


int main()
{
  string proverb = "When one door shuts " + "another opens";

  cout << "Concatenated string: " << proverb << endl;

  return 0;
}

-- Run and show the error

error: invalid operands to binary expression ('const char [21]' and 'const char [14]')
  string proverb = "When one door shuts " + "another opens";
                   ~~~~~~~~~~~~~~~~~~~~~~ ^ ~~~~~~~~~~~~~~~

1 error generated.


----------------------------

-- At least one of the operands must be a string


int main()
{
  string part_2 = "another opens";

  string proverb = "When one door shuts " + part_2;

  cout << "Concatenated string: " << proverb << endl;

  return 0;
}


-------------------------------------------------------

# -- string_operators_v05.cpp

-- Using operators to compare strings lexicographically

int main()
{
  string name_alice = "Alice";
  string name_peter = "Peter";

  cout << "Is Alice > Peter: " << (name_alice > name_peter) << endl;
  cout << "Is Alice < Peter: " << (name_alice < name_peter) << endl;

  return 0;
}



-------------------------------------------------------

# -- string_operators_v06.cpp



int main()
{
  string name_alice = "Alice";
  string name_peter = "Peter";

  cout << "Is Alice >= Peter: " << (name_alice >= name_peter) << endl;
  cout << "Is Peter <= Peter: " << (name_peter <= name_peter) << endl;
  cout << "Is Peter == Peter: " << (name_peter == name_peter) << endl;
  cout << "Is Peter != Peter: " << (name_peter != name_peter) << endl;

  return 0;
}






























































































































































