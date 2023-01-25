#include <iostream>

using std::cout;
using std::endl;

enum class FillColor {
  RED,
  GREEN,
  BLUE
};

enum class OutlineColor {
  RED,
  YELLOW,
  BLACK
};

int main()
{
  int fill_color = FillColor::RED;
  int outline_color = OutlineColor::RED;

  if (fill_color == FillColor::RED && outline_color == OutlineColor::RED) {
    cout << "Both fill and outline colors are RED" << endl;
  }
}
