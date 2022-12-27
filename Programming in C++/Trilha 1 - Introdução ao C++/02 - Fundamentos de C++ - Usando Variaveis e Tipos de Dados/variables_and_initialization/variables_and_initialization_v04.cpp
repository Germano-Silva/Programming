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
