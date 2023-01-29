#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
  string name {"Alice Smith"};
  string* name_ptr = &name;

  cout << "Original value of name: " << name << endl;

  *name_ptr = "Jason Donovon";

  cout << "Updated value of name: " << name << endl;

  return 0;
}
