#include <stdio.h>

int main() {
  for (int I=1; I<100; I++) {
    if ((I%15)==0) printf("FizzBuzz\n");
    else if ((I%3)==0) printf("Fizz\n");
    else if ((I%5)==0) printf("Buzz\n");
    else printf("%d\n",i);
  }
};
