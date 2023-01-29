#include <iostream>

using std::cout;
using std::endl;

int main()
{
  int savings_balance {2500};
  int checking_balance {1000};
 
  int* balance_ptr_1 {&savings_balance};
  int* balance_ptr_2 {&checking_balance};

  cout << "Balance pointer 1: " << balance_ptr_1 << endl;
  cout << "Balance pointer 2: " << balance_ptr_2 << endl;
  
  cout << "------------------" << endl;

  balance_ptr_1 = balance_ptr_2;

  *balance_ptr_1 = 9999;

  cout << "Savings balance " << savings_balance << endl;
  cout << "Checking balance " << checking_balance << endl;
}
