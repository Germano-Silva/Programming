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

  cout << std::setw(10) << student_names[0]
       << std::setw(10) << student_names[1] << endl
       << std::setw(10) << student_names[2] 
       << std::setw(10) << student_names[3] << endl
       << std::setw(10) << student_names[4] << endl;

  return 0;
}
