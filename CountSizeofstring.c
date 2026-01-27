#include<stdio.h>
#include <string.h>

int main(){
	char string[100];
	int size;
	
	printf("Enter string:");
	fgets(string, sizeof(string), stdin);
	
	size = strlen(string) - 1; // -1 since i dont wanna do string[strcspn(string, "\n")] = '\0';, which removes the null or newline /n since it registers that
	printf("Size:%d", size);
	return 0;
}
