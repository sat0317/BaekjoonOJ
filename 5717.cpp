#include <stdio.h>

int main(){
	int a, b;
	do{
		scanf("%d %d", &a, &b);
		if(!a||!b) return 0;
		printf("%d\n", a+b);
	} while(1);
	
	return 0;
}
