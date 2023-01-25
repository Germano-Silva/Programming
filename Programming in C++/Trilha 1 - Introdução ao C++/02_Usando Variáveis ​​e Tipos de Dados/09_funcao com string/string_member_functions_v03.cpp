#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
  string proverb;

  cout << "empty string proverb: " << proverb << endl;
  cout << "length of proverb: " << proverb.length() << endl;

  proverb.append("Once ").append("bitten ").append("twice ").append("shy");

  cout << "proverb (after update): " << proverb << endl;
  cout << "length of proverb (after update): " << proverb.length() << endl;

  return 0;
}
