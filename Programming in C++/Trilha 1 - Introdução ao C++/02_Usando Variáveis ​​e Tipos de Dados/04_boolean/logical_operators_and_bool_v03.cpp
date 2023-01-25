#include <iostream>

using std::cout;
using std::endl;

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
