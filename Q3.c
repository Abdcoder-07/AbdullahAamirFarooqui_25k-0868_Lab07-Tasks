#include<stdio.h>
int main(){
	int Age[8],i,smallest=1000;
	for(i=0;i<8;i++){
		printf("Enter Age for Participant no %d\n",i+1);
		scanf("%d",&Age[i]);
	}
	for(i=0;i<8;i++){
		if(Age[i]<smallest){
			smallest=Age[i];
		}
	}
	printf("Youngest Participant's Age is %d",smallest);
}
