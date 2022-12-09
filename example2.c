#include <stdio.h>

int main() {
  for (int i=1; i<100; i++) {
    int mod=0;
    if ((i%3)==0) mod|=1;
    if ((i%5)==0) mod|=2;
    switch(mod) {
      case 3: printf("FizzBuzz\n"); break;
      case 1: printf("Fizz\n"); break;
      case 2: printf("Buzz\n"); break;
      case 0: printf("%d\n",i); break;
    };  
  }
};
