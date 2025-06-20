// Sum of Digits

#include <stdio.h>
int main(){
    int n, sum =0, last_digit;
     scanf("%d", &n);
      if(n<0){
        n = -n;
      }
    while(n != 0){
        last_digit = n%10;
        sum = sum + last_digit;
        n = n/10;
    }
        printf("%d", sum);

    return 0;

     
}