#include <cstdio>
#include <cstring>

int main()
{
  const char* proverb_1 = (char *) "A bad workman always blames his tools";
  char proverb_2[60] = "A journey of thousand miles begins with a single step";

  printf("Here is a C-style string: %s\n", proverb_1);
  printf("Length of the first string: %lu\n", strlen(proverb_1));

  printf("Here is another C-style string: %s\n", proverb_2);
  printf("Length of the second string: %lu\n", strlen(proverb_2));

  return 0;
}
