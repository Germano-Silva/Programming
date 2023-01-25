#include <iostream>

using std::cout;
using std::endl;

enum FillColor {
  RED,
  GREEN,
  BLUE
};

int main()
{
  int fill_color = GREEN;
  int alt_fill_color = BLUE;

  cout << "The fill color specified is: " << fill_color << endl;
  cout << "The alternate fill color specified is: " << alt_fill_color << endl;
}
