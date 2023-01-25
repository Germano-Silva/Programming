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

  if (auto found_itr = find(int_vector.begin(), int_vector.end(), x); 
      found_itr == int_vector.end()) {
    cout << "found = " << std::boolalpha 
         << (found_itr != int_vector.end()) << endl;
  } else {
    cout << "found = " << std::boolalpha 
         << (found_itr != int_vector.end()) << endl;
  }

  // NOTE: found_itr will not be accessible here
  // cout << "(outside if) found = " << std::boolalpha 
  //      << (found_itr != int_vector.end()) << endl;

  return 0;
}

