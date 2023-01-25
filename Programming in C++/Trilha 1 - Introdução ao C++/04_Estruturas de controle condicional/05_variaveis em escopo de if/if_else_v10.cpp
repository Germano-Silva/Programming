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

  int x, y;

  cout << "Please enter first element to search for: ";
  cin >> x;

  cout << "Please enter second element to search for: ";
  cin >> y;

  auto x_found = (find(int_vector.begin(), int_vector.end(), x) != int_vector.end());
  auto y_found = (find(int_vector.begin(), int_vector.end(), y) != int_vector.end());

  if (x_found || y_found) {
        cout << "At least one of the elements was found in the vector" << endl;
  }

  if (x_found && y_found) {
        cout << "Both elements were found in the vector!" << endl;
  }

  if (!(x_found || y_found)) {
        cout << "Neither element was found in the vector" << endl;
  }

  return 0;
}

