#include<stdio.h>
int main(){
	int a,b;
	printf("enter a number");
	scanf("%d %d",&a,&b);
	
	if(a>b){
		printf("%d is the largest number.", a);
	}
	else{
		printf("%d is the largest number.", b);
	}
}
