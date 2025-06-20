//Reverse a Number

#include <stdio.h>
int main(){
    int n, LastDigit, Reverse = 0, sign = 1;
    scanf("%d", &n);
     if(n<0){
        sign = -1;
        n = -n;
     }
        while( n !=0 ){
            LastDigit = n%10;
            Reverse = Reverse * 10 + LastDigit;
            n = n/10;
        }
            printf("%d", Reverse*sign);\
    return 0;

}