
-- Run your code in the folder projects/stream_io

-- Run using the terminal within VS code (below the code)

-- Open up an empty stream_io.cpp file and paste in this code


**** IMPORTANT: This is a looong demo please record slowly and carefully ******


------------------------------------

-- Show and run the code below

# -- stream_io_v01.cpp


// Note that the characters introduced using the keyboard are only transmitted to the program when the ENTER (or RETURN) key is pressed. Once the statement with the extraction operation on cin is reached, the program will wait for as long as needed until some input is introduced.

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
  int num_a, num_b;

  cout << "Please enter the first integer: ";
  cin >> num_a;

  cout << "Please enter the second integer: ";
  cin >> num_b;

  cout << num_a << " + " << num_b << " = " << num_a + num_b << endl;
  cout << num_a << " - " << num_b << " = " << num_a - num_b << endl;

  return 0;
}

-- Run the code, input two integers e.g. 23 and 67 and show the results

-------------------------

// What happens in the example above if the user enters something else that cannot be interpreted as an integer? Well, in this case, the extraction operation fails. And this, by default, lets the program continue without setting a value for variable i, producing undetermined results if the value of i is used later.

-- Run the code again and enter a floating point value for the input e.g. 34.56

-- Output looks like this:

Please enter the first integer: 34.56
Please enter the second integer: 34 + 0 = 34
34 - 0 = 34


-------------------------


-- Run the code again and enter a string for the input e.g. hello

-- Output looks like this:

Please enter the first integer: hello
Please enter the second integer: 0 + 32766 = 32766
0 - 32766 = -32766

------------------------------------

-- Show and run the code below

# -- stream_io_v02.cpp

// Extractions on cin can also be chained to request more than one datum in a single statement
// This is the same as
// cin >> num_a
// cin >> num_b


int main()
{
  int num_a, num_b;

  cout << "Please enter two integers: " << endl;
  cin >> num_a >> num_b;

  cout << num_a << " + " << num_b << " = " << num_a + num_b << endl;
  cout << num_a << " - " << num_b << " = " << num_a - num_b << endl;

  return 0;
}

-- Run and enter two numbers one after another 

Please enter two integers: 
65
46
65 + 46 = 111
65 - 46 = 19



------------------------------------

-- Show and run the code below

# -- stream_io_v03.cpp


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


-- Run the code with this input

name: Julian
city: Paris

// What's your name?: Julian
// Where do you live?: Paris
// Hello Julian from Paris!



-- Re-run the code

name: Julian Smith

// What's your name?: Julian Smith
// Where do you live?: Hello Julian from Smith!

// However, cin extraction always considers spaces (whitespaces, tabs, new-line...) as terminating the value being extracted, and thus extracting a string means to always extract a single word, not a phrase or an entire sentence.


------------------------------------

-- Show and run the code below

# -- stream_io_v04.cpp

// To get an entire line from cin, there exists a function, called getline, that takes the stream (cin) as first argument, and the string variable as second.

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

-- Run this code with this input

// What's your name?: Julian Smith
// Where do you live?: New York



------------------------------------

-- Show and run the code below
-- cin.get() can be used to get one character from the input stream
-- cin is an object and we call the get() method on the object

// https://eecs.oregonstate.edu/ecampus-video/CS161/template/chapter_3/strings.html

# -- stream_io_v05.cpp


int main()
{
  char first_char;

  cout << "What is the first character in your name?: ";

  first_char = cin.get();

  cout << "You entered " << first_char << endl;

  return 0;
}


-- run and enter "G"

What is the first character in your name?: G
You entered G


-- run and enter "Greg", you will get the same result because we have read in only one character, the other characters are in the input buffer

What is the first character in your name?: G
You entered G


------------------------------------

-- Show and run the code below
-- Another form of cin.get()

// https://eecs.oregonstate.edu/ecampus-video/CS161/template/chapter_3/strings.html

# -- stream_io_v06.cpp


-- Just change the one line below to:


  cin.get(first_char); 

instead of

  first_char = cin.get();


-- run and enter "G"

What is the first character in your name?: G
You entered G



------------------------------------

-- Show and run the code below
-- Reading in multiple characters one at a time

// https://eecs.oregonstate.edu/ecampus-video/CS161/template/chapter_3/strings.html

# -- stream_io_v07.cpp

int main()
{
  char some_char;

  cout << "What are the first three letters in your name?: ";

  cin.get(some_char);
  cout << "First char in the stream " << some_char << endl;

  cin.get(some_char);
  cout << "Second char in the stream " << some_char << endl;

  cin.get(some_char);
  cout << "Third char in the stream " << some_char << endl;

  return 0;
}


-- Run with the following input

What are the first three letters in your name?: Tim
First char in the stream T
Second char in the stream i
Third char in the stream m


------------------------------------

-- Show and run the code below
-- Use cin.ignore() to skip a character from the input buffer

// https://eecs.oregonstate.edu/ecampus-video/CS161/template/chapter_3/strings.html

# -- stream_io_v08.cpp


int main()
{
  int fav_num;
  char fav_letter;

  cout << "What is your favorite number?: ";
  cin >> fav_num;

  cout << "Favorite number is: " << fav_num << endl;

  cin.ignore();

  cout << "What is your favorite character (hit enter to quit): ";
  cin.get(fav_letter);

  if (fav_letter == '\n') {
    cout << "Exiting..." << endl;
  } else {
      cout << "Favorite letter is: " << fav_letter << endl;
  }

  return 0;
}

-- Run with the following options

What is your favorite number?: 3
Favorite number is: 3
What is your favorite character (hit enter to quit): r
Favorite letter is: r

-- Run again with (hit enter when prompted for your favorite character)

What is your favorite number?: 3
Favorite number is: 3
What is your favorite character (hit enter to quit): 
Exiting...


---------------

-- Comment out the cin.ignore()

  // cin.ignore();


-- Run again (the program will terminate immediately after you enter 3)

What is your favorite number?: 3
Favorite number is: 3
What is your favorite character (hit enter to quit): Exiting...




------------------------------------

-- Show and run the code below

# -- stream_io_v05.cpp


-- Formatting the stream output

// You can change how data is formatted when it is written to an output stream using stream manipulators, which are declared in the iomanip and ios Standard Library headers. You apply a stream manipulator to an output stream with the insert operator, <<. We’ll just introduce the most useful manipulators. You should consult a Standard Library reference if you want to get to know the others.

// All manipulators declared by ios are automatically available if you include the familiar iostream header. Unlike those of the iomanip header, these stream manipulators do not require an argument

// ios manipulators

// std::fixed
// std::scientific
// std::defaultfloat
// std::dec
// std::hex
// std::oct
// std::showbase
// std::left
// std::right


#include <iostream>
#include <string>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main()
{
  float radius;

  cout << "Please input circle radius: ";
  cin >> radius;

  cout << "Area of the circle is: " << M_PI * radius * radius << endl;

  return 0;
}

-- Run with some input e.g. 3.45

Please input circle radius: 3.45
Area of the circle is: 37.3928

------------------------------

-- Now change the code to use a stream manipulator

  cout << "Area of the circle is: " << std::defaultfloat 
       << M_PI * radius * radius << endl;

-- This is the default manipulator used when we do not explicitly specify a manipulator


-- Run with the same input as earlier e.g. 3.45. The format of the result is the same

Please input circle radius: 3.45
Area of the circle is: 37.3928


------------------------------

// You’ll get the floating-point value presented with 3 digits of precision, which will correspond to 1 decimal place in this case. Because the default handling of floating-point output is in effect, the integer between the parentheses in setprecision() specifies the output precision for floating-point values, which is the total number of digits before and after the decimal point. 

-- Now change the code to use a stream manipulator (make sure to add the #include)

  #include <iomanip>


  cout << "Area of the circle is: " << std::defaultfloat << std::setprecision(3)
       << M_PI * radius * radius << endl;

-- Run and show the output

Please input circle radius: 3.45
Area of the circle is: 37.4



------------------------------------

-- Show and run the code below

# -- stream_io_v06.cpp

// You can make the parameter specify the number of digits after the decimal point—the number of decimal places in other words—by setting the mode as fixed.


int main()
{
  float radius;

  cout << "Please input circle radius: ";
  cin >> radius;

  cout << "Area of the circle is: " << std::fixed << std::setprecision(3)
       << M_PI * radius * radius << endl;

  return 0;
}


-- Run and show the output

Please input circle radius: 3.45
Area of the circle is: 37.393


------------------------------------

-- Show and run the code below

# -- stream_io_v07.cpp


// Setting the mode as fixed or as scientific causes the setprecision() parameter to be interpreted as the number of decimal places in the output value. Setting scientific mode causes floating-point output to be in scientific notation, which is with an exponent:


int main()
{
  float radius;

  cout << "Please input circle radius: ";
  cin >> radius;

  cout << "Area of the circle is: " << std::scientific << std::setprecision(3)
       << M_PI * radius * radius << endl;

  return 0;
}


-- Run and show the output

Please input circle radius: 3.45
Area of the circle is: 3.739e+01



------------------------------------

-- Show and run the code below

# -- stream_io_v08.cpp

// You need to specify the width for each output
// The output is right aligned by default

#include <iostream>
#include <string>
#include <iomanip>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
  string student_names[] = {"James", "Deborah", "Josephine", "Greg", "Tom"};

  cout << std::setw(10) << student_names[0] << endl;
  cout << std::setw(10) << student_names[1] << endl;
  cout << std::setw(10) << student_names[2] << endl;
  cout << std::setw(10) << student_names[3] << endl;
  cout << std::setw(10) << student_names[4] << endl;

  return 0;
}


------------------------------------

-- Show and run the code below

# -- stream_io_v09.cpp

// Can also chain these manipulators together as below
// Here the output will be across 3 lines

int main()
{
  string student_names[] = {"James", "Deborah", "Josephine", "Greg", "Tom"};

  cout << std::setw(10) << student_names[0]
       << std::setw(10) << student_names[1] << endl
       << std::setw(10) << student_names[2] 
       << std::setw(10) << student_names[3] << endl
       << std::setw(10) << student_names[4] << endl;

  return 0;
}


-- Run and show the output

     James   Deborah
 Josephine      Greg
       Tom


------------------------------------

-- Show and run the code below

# -- stream_io_v10.cpp

// Left align the output text


int main()
{
  string student_names[] = {"James", "Deborah", "Josephine", "Greg", "Tom"};

  cout << std::setw(10) << std::left << student_names[0]
       << std::setw(10) << std::left << student_names[1] << endl
       << std::setw(10) << std::left << student_names[2] 
       << std::setw(10) << std::left << student_names[3] << endl
       << std::setw(10) << std::left << student_names[4] << endl;

  return 0;
}















































































































































































