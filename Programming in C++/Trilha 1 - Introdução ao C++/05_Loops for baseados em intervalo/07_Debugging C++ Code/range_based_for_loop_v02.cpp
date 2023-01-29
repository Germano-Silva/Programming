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

  for (string country : countries) {
    
    cout << country << endl;
  }

  return 0;
}
