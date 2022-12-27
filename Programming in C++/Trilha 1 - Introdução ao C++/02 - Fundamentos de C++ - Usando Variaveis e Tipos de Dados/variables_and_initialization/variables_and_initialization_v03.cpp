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
