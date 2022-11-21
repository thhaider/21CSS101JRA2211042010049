#include <stdio.h>
void main() {
	int num;
	printf("Enter a number : ");
	scanf("%d", &num);
	if (num % 3 == 0) {  
		printf("Given number %d is divisible by 3\n", num);
	}
}
