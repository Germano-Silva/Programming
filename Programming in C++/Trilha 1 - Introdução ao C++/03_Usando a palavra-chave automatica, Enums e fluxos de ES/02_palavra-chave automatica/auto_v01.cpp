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
