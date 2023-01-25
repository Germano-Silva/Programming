#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
  string proverb_1 = "A bad workman always blames his tools";
  
  // Initalize one string with the contents of another string
  string proverb_2 {proverb_1};

  // Initialize with 11 characters starting at index 2
  string proverb_part {proverb_1, 2, 11};

  // Repeat the character 's' 10 times
  string repeated_s(10, 's');

  cout << "proverb_1: " << proverb_1 << endl;
  cout << "proverb_2: " << proverb_2 << endl;
  cout << "proverb_part: " << proverb_part << endl;
  cout << "repeated_s " << repeated_s << endl;

  return 0;
}
