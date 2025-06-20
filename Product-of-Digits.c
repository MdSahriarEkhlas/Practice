// Product of Digit

#include <stdio.h>
int main(){
    int n, last_digit, pro = 1;
     scanf("%d", &n);
      if(n<0){
        n = -n;
      }
    while(n != 0){
        last_digit = n%10;
        pro = pro * last_digit;
        n = n/10;
    }
     printf("%d", pro);
     return 0;
}