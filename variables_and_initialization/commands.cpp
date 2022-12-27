
-- Run your code in the folder projects/variables_and_initialization

-- Run using the terminal within VS code (below the code)

-- Open up an empty variables_and_initialization.cpp file and paste in this code


------------------------------------

-- Show and run the code below

# -- variables_and_initialization_v01.cpp


#include <iostream>

using std::cout;
using std::endl;
	 
int main() 
{
    int balance; // Declaring a variable

    cout << "My account balance is: $" << balance << endl;

    balance = 1000; // Initializing a variable
    cout << "My account balance is: $" << balance << endl;

    return 0;
}


------------------------------------

-- Show and run the code below
-- Assignment notation used to initialize variables

# -- variables_and_initialization_v02.cpp


#include <iostream>

using std::cout;
using std::endl;
	 
int main() 
{
    /*
     * Variables can be initialized as they are declared. This kind of 
     * initialization is called assignment notation. We use the = assignment 
     * operator to initalize variables.
     */
    int balance = 1000;
    int withdrawal = 200;
    int final_balance = balance - withdrawal;

    cout << "My current account balance is: $" << balance << endl;
    cout << "I need to withdraw: $" << withdrawal << endl;
    cout << "My final account balance is: $" << balance << endl;

    return 0;
}


------------------------------------

-- Show and run the code below
-- Functional notation used to initialize variables

# -- variables_and_initialization_v03.cpp

#include <iostream>

using std::cout;
using std::endl;
	 
int main() 
{
    
    // Variables can be initialized as they are declared. This kind of 
    // initialization is called functional notation. We initialize the
    // variables as though we invoke functions
    int balance(1000);
    int withdrawal(200);
    int final_balance(balance - withdrawal);

    cout << "My current account balance is: $" << balance << endl;
    cout << "I need to withdraw: $" << withdrawal << endl;
    cout << "My final account balance is: $" << balance << endl;

    return 0;
}



------------------------------------

-- Show and run the code below
-- Braced initializer used to initialize variables

# -- variables_and_initialization_v04.cpp


#include <iostream>

using std::cout;
using std::endl;
	 
int main() 
{
    // Variables can be initialized as they are declared. This kind of 
    // initialization uses a braced initializer. This is the most recent 
    // syntax that was introduced in C++11 specifically to standardize 
    // initialization. Its main advantage is that it enables you to initialize 
    // just about everything in the same way - it is often referred to as 
    // uniform initialization.

    int balance {1000};
    int withdrawal {200};
    int final_balance {balance - withdrawal};

    cout << "My current account balance is: $" << balance << endl;
    cout << "I need to withdraw: $" << withdrawal << endl;
    cout << "My final account balance is: $" << balance << endl;

    return 0;
}


------------------------------------

-- Show and run the code below

-- The braced initializer is also preferred because it warns you of narrowing conversions

# A conversion to a type with a more limited range of values is called a narrowing conversion. 
# If you use curly braces to initialize your variables, the compiler will always issue either 
# a warning or an error whenever it detects a narrowing conversion.


-- The code below only generates a compiler warning, no error
-- Certain compilers may not even warn for this narrowing conversion


int main() 
{
    int balance = 1000.45;

    cout << "My current account balance is: $" << balance << endl;

    return 0;
}

-- When you run the code the float gets truncated to integer

------------------------------------

-- Change the initialization to use the functional notation

    int balance(1000.45);


-- The code only generates a compiler warning, no error
-- Certain compilers may not even warn for this narrowing conversion

-- When you run the code the float gets truncated to integer

------------------------------------

-- Change the initialization to use the braced initializer

    int balance {1000.45};

-- Build and show the error



























