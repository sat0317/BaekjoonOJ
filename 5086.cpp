#include <stdio.h>

int main(){
	int a, b;
	do{
		
	scanf("%d %d", &a, &b);
	if(a==b) break;
	if(a%b==0){
		printf("multiple\n");
	} else if(b%a==0){
		printf("factor\n");
	} else {
		printf("neither\n");
	}
	
	}while(1);
	return 0;
}
