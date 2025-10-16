#include <stdio.h>

int main() {
   int arr[10],Asc=1;
   for(int i=0;i<10;i++){
       printf("Enter number %d\n",i+1);
       scanf("%d",&arr[i]);
   }
   for(int i=0;i<9;i++){
       if(arr[i]>arr[i+1]){
           Asc=0;
           break;
       }
    }
    if(Asc){
        printf("Array is in ascending order\n");
    }else{
        printf("Array is not in ascending order\n");
    }
}