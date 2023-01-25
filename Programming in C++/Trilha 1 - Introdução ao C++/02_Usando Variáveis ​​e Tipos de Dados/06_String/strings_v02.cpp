#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
  string proverb_1 = "A bad workman always blames his tools";
  string proverb_2 {"A journey of thousand miles begins with a single step"};
  string empty_string;

  cout << "C++ style string: " << proverb_1 << endl;
  cout << "Another C++ style string: " << proverb_2 << endl;
  cout << "Empty string: " << empty_string << endl;

  return 0;
}
