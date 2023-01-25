#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
  int num_1, num_2;

  cout << "Please enter two numbers (separated by a space): " << endl;
  cin >> num_1 >> num_2;

  if (num_1 > num_2) {
    cout << num_1 << " is greater than " << num_2 << endl;
  } 
  
  if (num_1 < num_2) {
    cout << num_1 << " is less than " << num_2 << endl;
  } 

  if (num_1 == num_2) {
    cout << num_1 << " is equal to " << num_2 << endl;
  }

  return 0;
}
