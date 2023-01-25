#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{

  vector<int> int_vector;

  cout << "Is vector empty?: " 
       << std::boolalpha << int_vector.empty() << endl;
  cout << "Size of vector: " << int_vector.size() << endl;
  cout << "Maximum size of vector: " << int_vector.max_size() << endl;

  if (int_vector.empty()) {
    cout << "The vector does not contain any elements" << endl;
  } else {
    cout << "The vector contains some elements" << endl;
  }

  cout << "---------------------------" << endl;
  cout << "Adding elements to vector " << endl;

  int_vector.push_back(34);
  int_vector.push_back(55);
  int_vector.push_back(17);
  int_vector.push_back(7);

  cout << "Is vector empty (after update)?: " 
       << std::boolalpha << int_vector.empty() << endl;
  cout << "Size of vector (after update): " << int_vector.size() << endl;
  cout << "Maximum size of vector (after update): " << int_vector.max_size() << endl;

  if (int_vector.empty()) {
    cout << "The vector still does not contain any elements" << endl;
  } else {
    cout << "The vector now contains elements" << endl;
  }


  return 0;
}

