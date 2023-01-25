#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
  string proverb = "The harder you work, the luckier you get.";

  cout << "Finding \"harder\": " << proverb.find("harder") << endl;
  cout << "Finding \"work\": " << proverb.find("work") << endl;
  cout << "Finding 't': " << proverb.find('t') << endl;

  return 0;
}
