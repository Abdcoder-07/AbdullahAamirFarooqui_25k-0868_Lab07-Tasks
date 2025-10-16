#include<stdio.h>
int main(){
	int num[12],i,temp,rem;
	for(i=0;i<12;i++){
		printf("Enter number %d\n",i+1);
		scanf("%d",&num[i]);
	}
	printf("Enter number you want to remove\n");
	scanf("%d",&rem);
	for(i=0;i<12;i++){
		if(num[i]==rem){
			num[i]=num[i+1];
		}
}
	for(i=0;i<12;i++){
		printf("%d	",num[i]);
	}
}
