#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
  string proverb = "The harder you work, the luckier you get.";

  cout << "Finding \"unlucky\": " << proverb.find("unlucky") << endl;
  cout << "Constant for illegal character position: " << std::string::npos << endl;

  return 0;
}
