
-- Run your code in the folder projects/scoped_enums

-- Run using the terminal within VS code (below the code)

-- Open up an empty scoped_enums.cpp file and paste in this code


------------------------------------

// https://smartbear.com/blog/closer-to-perfection-get-to-know-c11-scoped-and-ba/

-- Show and run the code below

-- C++ supports C-style enumerations which are unscoped enums

# -- scoped_enums_v01.cpp


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
  FillColor fill_color = GREEN;
  FillColor alt_fill_color = BLUE;

  cout << "The fill color specified is: " << fill_color << endl;
  cout << "The alternate fill color specified is: " << alt_fill_color << endl;
}


-------------------

-- When using unscoped enums they are all in the same scope (unscoped)
-- They must have distinct values

-- Add a second unscoped enum just below the original enum



enum OutlineColor {
  RED,
  YELLOW,
  BLACK
};


-- Run the code and show the error

 error: redefinition of enumerator 'RED'

  RED,
  ^

/Users/jananiravi/Desktop/iMovieLibrary/Skillsoft/SkillsoftCC++/SkillsoftC++/FundamentalsOfC++/final_code/demo_13_scoped_enums/code/scoped_enums.cpp:7:3: note: previous definition is here
  RED,
  ^


------------------------------------

-- Show and run the code below
-- Unscoped enums are not strongly typed, you can assign them to integers

# -- scoped_enums_v02.cpp


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



------------------------------------

-- Show and run the code below
-- C++11 onwards you can use scoped enums where you can use the same enum value 

# -- scoped_enums_v03.cpp


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
  FillColor fill_color = FillColor::RED;
  OutlineColor outline_color = OutlineColor::RED;

  if (fill_color == FillColor::RED && outline_color == OutlineColor::RED) {
    cout << "Both fill and outline colors are RED" << endl;
  }
}


-----------------

-- Also these are now strongly typed you cannot implicitly convert them to an int

-- Make this change

  int fill_color = FillColor::RED;
  int outline_color = OutlineColor::RED;


-- Build and show the error

error: cannot initialize a variable of type 'int' with an rvalue of type 'FillColor'

error: cannot initialize a variable of type 'int' with an rvalue of type 'OutlineColor'





















































































