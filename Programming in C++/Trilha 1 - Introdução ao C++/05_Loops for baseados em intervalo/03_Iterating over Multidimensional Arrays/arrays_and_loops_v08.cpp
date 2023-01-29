#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::size;
using std::string;
using std::getline;

int main()
{
  string student_names[] {"Joseph", "Martin", "Sheila", "Tanya", "Nancy"};

  string name_to_skip;
  cout << "Please enter the name of the student you want to skip: ";
  getline(cin, name_to_skip);

  for (int i = 0; i < size(student_names); i++) {
      if (student_names[i] == name_to_skip) {
        cout << "Skipping  i = " << i << endl;
        continue;
      }

      cout << student_names[i] << endl;
  }
}
