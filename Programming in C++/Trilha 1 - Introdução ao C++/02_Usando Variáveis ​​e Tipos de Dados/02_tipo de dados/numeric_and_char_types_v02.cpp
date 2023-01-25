#include <iostream>

using std::cout;
using std::endl;

int main() 
{
	cout << "Size of int is " << sizeof(int) << " bytes." <<  endl;

	int positive_int_extreme = 2147483647;
	int negative_int_extreme = - 2147483648;

	cout << "Signed int values can range between: " 
       << negative_int_extreme << " to " << positive_int_extreme << endl;

	positive_int_extreme = 2147483648; // 2147483647+1
	negative_int_extreme = -2147483649; // -2147483648-1
	
	cout << "If we exceed the range the results are strange : " 
       << negative_int_extreme << " to " << positive_int_extreme << endl;
	cout << "This results in a long to int conversion." << endl;
	return 0;
}
