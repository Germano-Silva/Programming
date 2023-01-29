#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::size;
using std::string;
using std::vector;

int main()
{
  vector<string> cities {"New York", "Seattle", "San Francisco", "Boston", "Austin"};
  //vector<string> cities {};

  auto it = cities.crbegin();

  do {
    cout << *it << endl;
    it++; 
  } while (it != cities.crend());
}
