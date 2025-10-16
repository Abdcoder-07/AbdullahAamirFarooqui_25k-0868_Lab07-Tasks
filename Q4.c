#include<stdio.h>
int main(){
	int num[]={1,2,3,4,5,6},i,temp;
	temp=num[5];
	for(i=5;i>0;i--){
		num[i]=num[i-1];
	}
	num[0]=temp;
	for(i=0;i<6;i++){
		printf("%d	",num[i]);
	}
}
