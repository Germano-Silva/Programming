#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::find;

int main()
{
  vector<int> int_vector;

  int_vector.push_back(34);
  int_vector.push_back(55);
  int_vector.push_back(17);
  int_vector.push_back(7);

  int x;

  cout << "Please enter element to search for: ";
  cin >> x;

  if (find(int_vector.begin(), int_vector.end(), x) == int_vector.end()) {
    cout << "The element was NOT found!" << endl;
  } else {
    cout << "The element was found!" << endl;
  }

  return 0;
}

