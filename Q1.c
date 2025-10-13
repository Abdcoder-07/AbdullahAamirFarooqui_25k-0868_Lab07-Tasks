#include<stdio.h>
int main(){
//	EIds for employee ids and SID for ID that needs to be searched and i for loops check to ensure ID exists
	int EIds[12],SID,i,check=0;
	printf("Enter 12 Employee IDs\n");
	for(i=0;i<12;i++){
		scanf("%d",&EIds[i]);
	}
	printf("Enter ID you want to check\n");
	scanf("%d",&SID);
	for(i=0;i<12;i++){
		if(SID==EIds[i]){
			check=1;
			break;
		}
	}
	if(check==1){
		printf("ID Exists in array");
	}else{
		printf("ID does not exist in array");
	}
}
