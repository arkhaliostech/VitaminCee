#include <stdio.h>
int main(){
	int num1 = 2, num2 = 1;
	
	printf("Even Numbers:\n\n");
	while(num1 < 49){
	printf("%d\n", num1);
		num1+=2;
		continue;
	}
	printf("\nOdd Numbers:\n\n");
	while(num2 < 49){
	printf("%d\n", num2);
		num2+=2;
	}
	return 0;
}
