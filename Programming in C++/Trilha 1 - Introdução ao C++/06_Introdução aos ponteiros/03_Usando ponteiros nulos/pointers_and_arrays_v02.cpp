#include <iostream>

using std::cout;
using std::endl;

int main()
{
  int balance {1000};
  int* balance_ptr {&balance};

  cout << "Original balance: " << balance << endl;
  cout << "Address of balance: " << balance_ptr << endl;
  cout << "Original balance (through pointer): " << *balance_ptr << endl;

  *balance_ptr = 2000;

  cout << "Updated balance: " << balance << endl;
  cout << "Updated balance (through pointer): " << *balance_ptr << endl;
}
