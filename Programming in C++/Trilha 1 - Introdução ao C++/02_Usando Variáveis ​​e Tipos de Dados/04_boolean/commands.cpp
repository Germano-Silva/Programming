
-- Run using the terminal within VS code (below the code)

-- Open up an empty logical_operators_and_bool.cpp file and paste in this code


------------------------------------

-- Show and run the code below

// In C++, the data type bool has been introduced to hold a boolean value, true or false.The values true or false have been added as keywords in the C++ language.

// The default numeric value of true is 1 and false is 0.

# -- logical_operators_and_bool_v01.cpp


using std::cout;
using std::endl;

int main()
{
  bool is_valid = true;

  cout << "Is this valid?: " << is_valid << endl;

  return 0;
}


------- 

-- Change to false and show the output


  bool is_valid = false;




------------------------------------

-- Show and run the code below

-- Implicit conversions convert all non-zero values to true and zero values to false

-- Show the warnings when you build this code

# -- logical_operators_and_bool_v02.cpp

using std::cout;
using std::endl;

int main()
{
  bool b1 = 0;
  bool b2 = 198;
  bool b3 = 435.98;
  bool b4 = -345.09;

  cout << "b1 = " << b1 << endl;
  cout << "b2 = " << b2 << endl;
  cout << "b3 = " << b3 << endl;
  cout << "b4 = " << b4 << endl;

  return 0;
}



------------------------------------

-- Show and run the code below
-- Logical operators work exactly like C and the values can be assigned to bools


# -- logical_operators_and_bool_v03.cpp

int main()
{

  bool first_condition = 10 > 5;
  bool second_condition = 10 <= 5;

  int balance = 1000;

  bool balance_check = balance == 0;

  cout << "first_condition (10 > 5) = " << first_condition << endl;
  cout << "second_condition (10 <= 5) = " << second_condition << endl;
  cout << "balance_check (balance == 0) = " << balance_check << endl;

  return 0;
}




------------------------------------

-- Show and run the code below
-- Logical operators work exactly like C and the values can be assigned to bools


# -- logical_operators_and_bool_v04.cpp


using std::cout;
using std::endl;

int main()
{
  int a = 25;
  int b = 367;

  bool result = (a > 10) && (b < 1000);
  cout << "(a > 10) && (b < 1000) = " << result << endl;

  result = (a < 10) || (b < 1000);
  cout << "(a < 10) || (b < 1000) = " << result << endl;

  result = !(a < 100);
  cout << "!(a < 100) = " << result << endl;

  return 0;
}












































































































