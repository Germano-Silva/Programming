#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::size;
using std::string;
using std:: vector;

int main()
{
  vector<string> cities;

  cities.push_back("New York");
  cities.push_back("Seattle");
  cities.push_back("San Francisco");
  cities.push_back("Boston");
  cities.push_back("Austin");

  for (std::vector<string>::iterator it = cities.begin();
       it != cities.end();
       it++) {

      cout << *it << endl;    
  }

}
