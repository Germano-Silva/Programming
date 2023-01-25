#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
  string proverb = "Persuasion is better than force.";
  string first_word {proverb.substr(0, 10)};

  cout << "First word: " << first_word << endl;

  cout << "Second word: " << proverb.substr(12, 2) << endl;

  cout << "Second word onwards: " << proverb.substr(11, 100) << endl;

  cout << "Third word onwards: " << proverb.substr(14) << endl;

  return 0;
}
