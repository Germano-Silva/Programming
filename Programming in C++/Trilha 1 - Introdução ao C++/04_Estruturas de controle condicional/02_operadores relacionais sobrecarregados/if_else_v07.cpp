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

  std::vector<int>::iterator begin_itr = int_vector.begin();
  std::vector<int>::iterator end_itr = int_vector.end();

  std::vector<int>::iterator found_itr = find(begin_itr, end_itr, x);

  //auto begin_itr = int_vector.begin();
  //auto end_itr = int_vector.end();

  //auto found_itr = find(begin_itr, end_itr, x);

  if (found_itr == end_itr) {
    cout << "The element was NOT found!" << endl;
  } else {
    cout << "The element was found!" << endl;
  }

  //cout << "(outside if) found = " << std::boolalpha 
  //     << (found_itr != end_itr) << endl;

  return 0;
}

