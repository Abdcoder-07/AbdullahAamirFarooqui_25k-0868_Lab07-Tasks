#include <stdio.h>

int main() {
   int total=0,arr[100],j=0;
   char str[100];
   printf("Enter text\n");
   scanf("%[^\n]",str);
   for(int i=0;i<=str[i]!='\0';i++){
       if(str[i]>='0'&&str[i]<='9'){
           arr[j]=str[i]-'0';
           j+=1;
       }
   }
   for(int i=0;i<j;i++){
       total+=arr[i];
   }
   printf("The sum of the digits present in the string is %d",total);
}