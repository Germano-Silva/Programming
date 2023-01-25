
-- Run your code in the folder projects/operators

-- Run using the terminal within VS code (below the code)

-- Open up an empty operators.cpp file and paste in this code


------------------------------------

// THIS ENTIRE DEMO IS JUST TO SHOW THAT ARITHMETIC, ASSIGNMENT, UNARY OPERATORS IN 
// C++ ARE EXACTLY THE SAME AS IN C

-- Show and run the code below

# -- operators_v01.cpp


#include <iostream>

using std::cout;
using std::endl;

int main()
{
  
  int num_a = 78, num_b = 8;

  cout << "num_a + num_a = " << num_a + num_b << endl;
  cout << "num_a - num_a = " << num_a - num_b << endl;
  cout << "num_a * num_a = " << num_a * num_b << endl;
  cout << "num_a / num_a = " << num_a / num_b << endl;
  cout << "num_a % num_a = " << num_a % num_b << endl;

  return 0;
}


------------------------------------

-- Show and run the code below

# -- operators_v02.cpp


int main()
{
  
  float num_a = 78.87f, num_b = 8.456f;

  cout << "num_a + num_a = " << num_a + num_b << endl;
  cout << "num_a - num_a = " << num_a - num_b << endl;
  cout << "num_a * num_a = " << num_a * num_b << endl;
  cout << "num_a / num_a = " << num_a / num_b << endl;

  return 0;
}



------------------------------------

-- Show and run the code below

# -- operators_v03.cpp

int main()
{
	int apples_with_johnny = 6;
	cout << "prefix increment: " << ++apples_with_johnny << endl;
	cout << "Johnny now has: " << apples_with_johnny << " apples." << '\n';

	int apples_with_stevie = 12;
	cout << "postfix increment: " << apples_with_stevie++ << endl;
	cout << "Stevie now has: " << apples_with_stevie << " apples." << endl;

	return 0;
}


------------------------------------

-- Show and run the code below

# -- operators_v04.cpp


int main()
{
	int apples_with_johnny = 6;
	cout << "prefix decrement: " << --apples_with_johnny << endl;
	cout << "Johnny now has: " << apples_with_johnny << " apples." << '\n';

	int apples_with_stevie = 12;
	cout << "postfix decrement: " << apples_with_stevie++ << endl;
	cout << "Stevie now has: " << apples_with_stevie << " apples." << endl;

	return 0;
}


------------------------------------

-- Show and run the code below

# -- operators_v05.cpp

int main()
{
	// simple assignment
	int apples = 10;
	cout << "Originally I had: "  << apples << " apples." << endl; 

	// addition assignment
	apples += 5;
	cout << "After adding 5 apples I have now got: " 
		 << apples << " apples." << endl; 

	// subtraction assignment
	apples -= 2;
	cout << "After eating 2 apples I have now got: " 
		 << apples << " apples." << endl; 

	// multiplication assignment
	apples *= 3;
	cout << "After tripling my apples I have now got: " 
		 << apples << " apples." << endl; 

	// division assignment
	apples /= 5;
	cout << "After splitting the apples amongst 5 friends each friend has: " 
		 << apples << " apples." << endl; 

	// modulo assignment
	apples %= 4;
	cout << "After splitting the apples amongst 4 friends and keeping the rest I have: " 
		 << apples << " apples." << endl; 

	return 0;
}












































































































