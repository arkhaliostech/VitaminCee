#include <stdio.h>
#include <string.h>

int main(){
	int n, sum = 0, i; // USER INPUT 
	
	printf("Enter number of arrays: ");
	scanf("%d", &n);
	
	int arr[n];
	
	printf("Enter numbers: ", n);
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
		
	}
	
	for(i=0;i<n;i++){
		sum += arr[i];
	}
	printf("Sum of Inputted numbers: %d", sum);
	return 0;
	
}
// PREMADE ARRAY

/* int main(){
	char array[] = {2,4,6,8}; // char still works
	int n = sizeof(array), sum = 0,i;
	
	for(i=0;i<n;i++){
		sum += array[i]; // char converted into int.
	}
	printf("Sum of array: %d", sum);
	
	return 0;
}*/
