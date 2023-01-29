#include <iostream>

using std::cout;
using std::endl;
using std::size;


int main()
{
  float student_scores[] {2.3, 4.1, 7.9, 8.2, 6.4, 7.7};

  cout << "Size of array: " << size(student_scores) << endl;

  for (int i = 0; i < size(student_scores); i++) {
      cout << "student_score at index " 
           << i << " = " << student_scores[i] << endl;
  }
}
