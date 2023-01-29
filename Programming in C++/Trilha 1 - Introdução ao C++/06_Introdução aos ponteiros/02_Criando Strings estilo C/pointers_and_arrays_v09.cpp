#include <iostream>

using std::cout;
using std::endl;


int main()
{
  double* scores_ptr = nullptr;

  double scores[] {87.3, 88.2, 54.9, 34.6};
  
  scores_ptr = scores;

  cout << "Value in scores_ptr at index=2: " << *(scores_ptr + 2) << endl;
  cout << "Value in scores at index=2: " << *(scores + 2) << endl;

  *(scores_ptr + 2) = 99.9; 

  cout << "Value in scores_ptr at index=2 (after update): " << *(scores_ptr + 2) << endl;
  cout << "Value in scores at index=2 (after update): " << *(scores + 2) << endl;
}
