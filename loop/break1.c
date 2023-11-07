// C program to illustrate
// using break statement
// in Nested loops
//loop se ek dam bahar nahi feka jayega
// C Program to use break Statement with Nested Loops
#include <stdio.h>

int main()
{
	// nested for loops with break statement
	// at inner loop
	for (int i = 1; i <= 6; ++i) {
		for (int j = 1; j <= i; ++j) {
			if (i <= 4) {
				printf("%d ", j);
			}
			else {
				// if i > 4 then this innermost loop will
				// break
				break;
			}
		}
		printf("\n");
	}
	return 0;
}


// C Program to demonstrate infinite loop without using
// break statement
#include <stdio.h>

int main()
{

	int i = 0;

	// while loop which will always be true
	while (1) {
		printf("%d ", i);
		i++;
		if (i == 5) {
			break;
		}
	}
	return 0;
}

