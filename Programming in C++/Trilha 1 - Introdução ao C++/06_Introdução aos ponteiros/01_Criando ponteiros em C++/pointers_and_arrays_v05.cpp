#include <iostream>

using std::cout;
using std::endl;

int main()
{
  char letter {'V'};
  auto letter_ptr {&letter};

  int balance {1000};
  auto balance_ptr {&balance};

  float expenses {245.56F};
  auto expenses_ptr {&expenses};

  double salary {5000.456};
  auto salary_ptr {&salary};

  cout << "type of letter_ptr: " << typeid(letter_ptr).name() << endl;
  cout << "type of balance_ptr: " << typeid(balance_ptr).name() << endl;
  cout << "type of expenses_ptr: " << typeid(expenses_ptr).name() << endl;
  cout << "type of salary_ptr: " << typeid(salary_ptr).name() << endl;
}