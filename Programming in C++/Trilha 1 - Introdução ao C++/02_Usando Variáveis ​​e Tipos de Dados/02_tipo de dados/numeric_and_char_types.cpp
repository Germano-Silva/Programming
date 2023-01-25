#include <iostream>

using std::cout;
using std::endl;
	
int main()
{
	char newline = '\n';
	char tab_horizontal = '\t';
	char tab_vertical = '\v';

	cout << "I" 
		 << newline << " solemnly" 
		 << tab_horizontal << " swear" 
		 << tab_vertical << "that, \n I \v am \\ upto no \" good" << endl;

	return 0;
}



