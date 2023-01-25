#include <iostream>

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
