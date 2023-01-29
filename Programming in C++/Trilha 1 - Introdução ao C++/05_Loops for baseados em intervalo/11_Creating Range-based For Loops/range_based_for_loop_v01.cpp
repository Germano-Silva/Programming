#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
  vector<string> countries {"India", "United States", "Singapore", "Nepal", "Senegal"};

  for (auto it = countries.cbegin(); it != countries.cend();) {
    
    cout << *it << endl;

    it++;
  }

  return 0;
}
