#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
  string name, city;

  cout << "What's your name?: ";
  cin >> name;

  cout << "Where do you live?: ";
  cin >> city;

  cout << "Hello " << name << " from " << city << "!" << endl;

  return 0;
}
