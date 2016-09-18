#include <stdio.h>
#include <stdlib.h>

int main() {

  int ans;
  int div = 3;
  long num = 600851475143;
  
  while (div <= num) {
    if (num % div == 0) {
      num = num/div;
      ans = div;
    }
    div+=2;
  }

  printf("%d\n",ans);  

  return 0;
}
