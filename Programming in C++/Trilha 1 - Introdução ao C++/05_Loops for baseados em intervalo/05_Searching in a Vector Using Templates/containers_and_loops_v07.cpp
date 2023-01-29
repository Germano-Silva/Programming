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

  auto it = cities.rbegin();

  while (it != cities.rend()) {
      cout << *it << endl;
      it++; 
  }
}
