#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
  char first_char;

  cout << "What is the first character in your name?: ";

  first_char = cin.get();

  cout << "You entered " << first_char << endl;

  return 0;
}