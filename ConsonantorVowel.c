#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
	int consonants = 0, vowels = 0, i;
	char karakter[100];
		
	printf("Enter sentence: ");
	fgets(karakter, sizeof(karakter), stdin);
	
	
	for(i = 0;i < strlen(karakter); i++){
		char c = tolower(karakter[i]);
		
		if(isalpha(c)) {
		if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u'){ // condition for anti vowels, using == and putting and counting consonants++ use OR gates. 
		consonants++;
		}
		else 
		vowels++;
	}
}
	printf("Vowels: %d\n", vowels);
	printf("Consonants: %d", consonants);
	
	return 0;
	
}
