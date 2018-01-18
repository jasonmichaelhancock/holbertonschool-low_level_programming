#include <stdio.h>

int main(void)
{

  printf ("The size of a char is: %lu.\n", (unsigned long)sizeof(char));
  printf ("The size of an int is: %lu.\n", (unsigned long)sizeof(int));
  printf ("The size of a long int is: %lu.\n", (unsigned long)sizeof(long int));
  printf ("The size of a long long int is: %lu.\n", (unsigned long)sizeof(long long int));
  printf ("The size of a float is: %lu.\n", (unsigned long)sizeof(float));

  return(0);
}
