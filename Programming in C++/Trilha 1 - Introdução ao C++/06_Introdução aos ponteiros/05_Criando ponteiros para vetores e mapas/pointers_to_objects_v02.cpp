#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
  string name {"Alice Smith"};
  string* name_ptr = &name;

  cout << "Name: " << *name_ptr << endl;
  cout << "Is string empty?: " << std::boolalpha << (*name_ptr).empty() << endl;
  cout << "Length of name: " << (*name_ptr).length() << endl;
  cout << "Character at index=6: " << (*name_ptr).at(6) << endl;

  return 0;
}
