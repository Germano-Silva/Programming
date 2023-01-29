#include <iostream>

using std::cout;
using std::endl;

int main()
{
  const char* movie_ptr {"When Harry Met Sally"};
  char movie[] {"When Harry Met Sally"};

  cout << "Value in movie_ptr at index=0: " << movie_ptr[0] << endl;
  cout << "Value in movie at index=0: " << movie[0] << endl;

  cout << "Value in movie_ptr at index=6: " << movie_ptr[6] << endl;
  cout << "Value in movie at index=6: " << movie[6] << endl;

  cout << "Value in movie_ptr at index=9: " << movie_ptr[9] << endl;
  cout << "Value in movie at index=9: " << movie[9] << endl;
}
