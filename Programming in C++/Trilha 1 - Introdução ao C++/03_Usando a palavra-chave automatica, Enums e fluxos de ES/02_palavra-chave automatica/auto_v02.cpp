#include <iostream>
#include <typeinfo>

using std::cout;
using std::endl;

int main()
{
  auto char_var = 'a';
  auto long_var = 2'000'000'000'000'000;

  cout << "Type of char variable: " << typeid(char_var).name() << endl;
  cout << "Type of long variable: " << typeid(long_var).name() << endl;

  return 0;
}
