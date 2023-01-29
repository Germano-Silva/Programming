#include <iostream>

using std::cout;
using std::endl;

int main()
{
  const char* movie_ptr {"When Harry Met Sally"};
  cout << "Movie name: " << *movie_ptr << endl;

  char movie[] {"Saving Private Ryan"};
  cout << "Movie name: " << movie << endl;
}
