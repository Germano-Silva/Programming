#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main()
{
  char first_char;

  cout << "What is the first character in your name?: ";

  cin.get(first_char);

  cout << "You entered " << first_char << endl;

  return 0;
}