#include<stdio.h>
int main(){
	int Profit[10],i,total=0;
	for(i=0;i<10;i++){
		printf("Enter Daily profit\n",i+1);
		scanf("%d",&Profit[i]);
	}
	for(i=0;i<10;i++){
		if(Profit[i]>0){
			total+=Profit[i];
		}
	}
	printf("Sum of Daily profits is %d",total);	
}
