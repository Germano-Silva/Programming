#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
  int num_a, num_b;

  cout << "Please enter the first integer: ";
  cin >> num_a;

  cout << "Please enter the second integer: ";
  cin >> num_b;

  cout << num_a << " + " << num_b << " = " << num_a + num_b << endl;
  cout << num_a << " - " << num_b << " = " << num_a - num_b << endl;

  return 0;
}
