#include <stdio.h>
#include <stdlib.h>

int main() {
  int ans;
  int div = 1;
  long num = 600851475143;
  
  while (div < num/2) {
    if (num % div == 0) {
      ans = div;
    }
    div+=2;
  }
  
  printf("%d\n",div);  

  return 0;
}
