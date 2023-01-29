#include <iostream>

using std::cout;
using std::endl;

int main()
{
  float student_scores[5];
 
  for (int i = 0; i < 5; i++) {
      cout << "student_score at index " 
           << i << " = " << student_scores[i] << endl;
  }
}
