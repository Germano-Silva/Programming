#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

int main()
{
  string first_string;
  string second_string;

  cout << "Please enter the first string: ";
  getline(cin, first_string);

  cout << "Please enter the second string: ";
  getline(cin, second_string);

  if (first_string != second_string) {
    cout << "The two strings you entered are NOT the same!" << endl;
  }

  if (first_string <= second_string) {
    cout << "The first string is lexicographically less than or equal to the second string" << endl;
  }

  if (first_string >= second_string) {
    cout << "The first string is lexicographically greater than or equal to the second string" << endl;
  }

  return 0;
}

