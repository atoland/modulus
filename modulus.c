/*Adam Toland*/
#include <stdio.h>

int main(void) {
	/*Intialize and scan in an integer*/
	int foo;
	printf("Enter a number: ");
	scanf("%d", &foo);

	int oof;
	printf("Enter a second number\n");
	scanf("%d", &oof);



	/*Modulus division on foo - the denominator is two*/

	int mod = foo % oof;

	printf("The result of modulus division is: %d\n", mod);

	if (mod == 0) {
		printf("The number %d is even\n", foo);
	} else if (mod == 1) {
		printf("The number %d is odd\n", foo);
	}


	/*End program*/
	return 0;
}

