#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
  string proverb_1 = "No gain without pain.";
  string proverb_2 = "No news is good news.";

  cout << "proverb_1: " << proverb_1 << endl;
  cout << "length of proverb_1: " << proverb_1.length() << endl;

  proverb_1.append(proverb_2);

  cout << "proverb_1 (after update): " << proverb_1 << endl;
  cout << "length of proverb_1 (after update): " << proverb_1.length() << endl;

  return 0;
}
