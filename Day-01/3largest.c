#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter a number");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		if(a>c){
			printf("a is largest");
		}
		else{
			printf("c is largest");
		}
	}
	else if(b>a){
		if(b>c)
			printf("b is largest");
		
		else
		printf("c is largest");
	}
	else{
		printf("Numbers may be equal");
	}
	return 0;
	
	
}
