#include <stdlib.h>
#include <stdio.h>

int main() {

  int curr = 1;
  int prev = 1;
  int ans = 0;
  int temp;
  
  while (curr < 4000000) {
    if (curr % 2 == 0) {
      ans += curr;
    }
    temp = prev;
    prev = curr;
    curr = curr + temp;
  }

  printf("%d\n",ans);
  
  return 0;
}
