#include <iostream>

using std::cout;
using std::endl;

int main()
{
  cout << "A familiar for loop" << endl;
  for (float i = 1.1; i < 10; i = i + 1.1) {
      cout << "i = " << i << endl;
  }
}
