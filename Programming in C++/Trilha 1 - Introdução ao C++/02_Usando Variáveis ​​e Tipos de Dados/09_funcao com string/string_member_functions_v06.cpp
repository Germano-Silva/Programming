#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
  string name = "Alice Johnson";
  string name_john = "John";

  int result = name.compare(6, name_john.length(), name_john);

  cout << "Name contains \"John\" starting at index 6: " 
       << result << endl;

  return 0;
}
