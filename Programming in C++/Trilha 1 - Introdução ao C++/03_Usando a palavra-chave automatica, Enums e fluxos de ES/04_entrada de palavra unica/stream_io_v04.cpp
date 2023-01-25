#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;

int main()
{
  string name, city;

  cout << "What's your name?: ";
  getline(cin, name);

  cout << "Where do you live?: ";
  getline(cin, city);

  cout << "Hello " << name << " from " << city << "!" << endl;

  return 0;
}
