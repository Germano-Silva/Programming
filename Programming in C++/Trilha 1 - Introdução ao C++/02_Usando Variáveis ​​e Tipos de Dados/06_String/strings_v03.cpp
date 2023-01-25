#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
  string proverb_1 = "A bad workman always blames his tools";
  string proverb_2 {"A journey of thousand miles begins with a single step"};

  const char* proverb_1_cstr = proverb_1.c_str();
  char* proverb_2_cstr_nonconst = proverb_2.data();

  cout << "C-style string: " << proverb_1_cstr << endl;
  cout << "Another C-style string: " << proverb_2_cstr_nonconst << endl;

  return 0;
}
