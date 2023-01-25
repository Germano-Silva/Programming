#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
  int num_a, num_b;

  cout << "Please enter two integers: " << endl;
  cin >> num_a >> num_b;

  cout << num_a << " + " << num_b << " = " << num_a + num_b << endl;
  cout << num_a << " - " << num_b << " = " << num_a - num_b << endl;

  return 0;
}
