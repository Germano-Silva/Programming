#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
  char ch;
  cout << "Please enter a letter of the alphabet: ";

  cin >> ch;

  if (std::isalpha(ch)) {
    switch (ch = std::tolower(ch); ch) {
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
        cout << "The character you entered is a vowel" << endl;
        break;
      default:
        cout << "The character you entered is NOT a vowel" << endl;
    }
  } else {
        cout << "The character you entered is NOT a letter" << endl;
  }

  return 0;
}
