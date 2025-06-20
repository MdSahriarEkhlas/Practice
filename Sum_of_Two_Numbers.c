//Sum of Two number

#include <stdio.h>
int main(){
    int arr[2];
    int sum = 0;
    for(int i = 0; i < 2; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("%d", sum);
    return 0;
}