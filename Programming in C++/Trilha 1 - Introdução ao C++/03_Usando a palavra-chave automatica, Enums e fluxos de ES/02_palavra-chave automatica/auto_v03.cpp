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

  auto result = ((int_var * long_var) + double_var) / float_var;

  cout << "Type of result variable: " << typeid(result).name() << endl;

  return 0;
}
