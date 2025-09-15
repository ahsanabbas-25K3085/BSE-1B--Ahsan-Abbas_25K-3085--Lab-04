#include <stdio.h>

int main()
 {
    char student;
    float total = 20;

    printf("Do you have a student ID (Y/N)? ");
    scanf(" %c", &student);

    if (student == 'Y' || student == 'y')
    {
	  total -= 2;
    }
    printf("\nFinal cost: $%.2f", total);
    return 0;
}
