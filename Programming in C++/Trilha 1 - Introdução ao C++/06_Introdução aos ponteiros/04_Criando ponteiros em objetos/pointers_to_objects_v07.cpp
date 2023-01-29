#include <iostream>
#include <string>
#include <map>

using std::cout;
using std::endl;
using std::string;
using std::map;

int main()
{
  string name_1 {"Alice Smith"};
  string name_2 {"Bob McCarthy"};
  string name_3 {"Charles Babbage"};
  string name_4 {"Dora Jones"};

  map<int, string*> employees_map {
    {111, &name_1},
    {222, &name_2},
    {333, &name_3},
    {444, &name_4}
  };

  for (auto& employee : employees_map) {
    cout << employee.first << ": " << *employee.second << endl;
    cout << "Length of employee name: " << (employee.second)->length() << endl;
  }

  return 0;
}
