#include<stdio.h>
int main(){
	int StMarks[10],i,Total=0;
	float Avg;
	printf("Enter marks for 10 students\n");
	for(i=0;i<10;i++){
		scanf("%d",&StMarks[i]);
	}
	for(i=0;i<10;i++){
		Total=Total+StMarks[i];		
}
	Avg=Total/10.0;
	printf("Avg Marks= %f",Avg);
}
