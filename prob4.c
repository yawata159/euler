#include <stdio.h>
#include <stdlib.h>


char isPalindrome(int num) {

  int n = num;
  int rev = 0;
  int digit;
  
  while (num > 0) {
    digit = num % 10;
    rev = rev*10 + digit;
    num = num/10;
  }
  
  return n == rev;
    
}


int main() {

  int a;
  int b;
  int curr = 0;
	
	 
  for (a = 999 ;a > 99; a --) {
    for (b = 999; b > 99; b--) {
      if (isPalindrome(a*b)){
	if (a*b > curr) {
	  curr = a*b;
	}
      }
    }
  }

  printf("%d\n", curr);
  return 0;
}
