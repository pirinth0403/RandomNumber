#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int number;
  int lower = 0, upper = 20;
  srand(time(NULL));

  number = (rand() %(upper-lower +1)) + lower; 
  printf("%d\n", number);


  return 0;
}
