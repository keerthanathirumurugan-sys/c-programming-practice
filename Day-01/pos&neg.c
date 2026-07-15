#include<stdio.h>
int main(){
	int num;
	printf("Enter a num");
	scanf("%d",&num);
	if(num>0){
		printf("Given number is Positive");
	}
	else if(num==0){
		printf("the number is 0");
	}
	else{
		printf("given number is negative");
	}
	return 0;
}
