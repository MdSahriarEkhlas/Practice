//Maximum of Three Numbers

#include <stdio.h>
int main(){
    int num = 0;
    int arr[3];
    for(int i = 0; i < 3; i++){
        scanf("%d", &arr[i]);
             if(num < arr[i]){
                num = arr[i];
             }
    }
     printf("%d", num);
     
      return 0;
}