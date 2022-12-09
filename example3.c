#include <stdio.h>

int main() {
  for (int i=1; i<100; i++) {
    int p=1;
    if ((i%3)==0) { printf("Fizz"); p=0; };
    if ((i%5)==0) { printf("Buzz"); p=0; };
    if (p) printf("%d",i);
    print("\n");
  };
};
