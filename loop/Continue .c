// C program to explain the use
// of continue statement with for loop

#include <stdio.h>

int main()
{
	// for loop to print 1 to 8
	for (int i = 1; i <= 8; i++) {
		// when i = 4, the iteration will be skipped and for
		// will not be printed
		if (i == 4) {
			continue;
		}
		printf("%d ", i);
	}
	printf("\n");

	int i = 0;
	// while loop to print 1 to 8
	while (i < 8) {
		// when i = 4, the iteration will be skipped and for
		// will not be printed
		i++;
		if (i == 4) {
			continue;
		}
		printf("%d ", i);
	}
	return 0;
}
// 1 2 3 5 6 7 8 
// 1 2 3 5 6 7 8 

// C program to explain the use
// of continue statement with nested loops
#include <stdio.h>

int main()
{

	// outer loop with 3 iterations
	for (int i = 1; i <= 3; i++) {
		// inner loop to print integer 1 to 4
		for (int j = 0; j <= 4; j++) {

			// continue to skip printing number 3
			if (j == 3) {
				continue;
			}
			printf("%d ", j);
		}
		printf("\n");
	}
	return 0;
}
// 0 1 2 4 
// 0 1 2 4 
// 0 1 2 4 

// C program to demonstrate difference between
// continue and break
#include <stdio.h>

int main()
{

	printf("The loop with break produces output as: \n");

	for (int i = 1; i <= 7; i++) {

		// Program comes out of loop when
		// i becomes multiple of 3.
		if (i == 3)
			break;
		else
			printf("%d ", i);
	}

	printf("\nThe loop with continue produces output as: \n");
	for (int i = 1; i <= 7; i++) {

		// The loop prints all values except
		// those that are multiple of 3.
		if (i == 3)
			continue;
		printf("%d ", i);
	}
	return 0;
}

