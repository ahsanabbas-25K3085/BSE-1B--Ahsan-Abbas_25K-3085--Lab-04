#include <stdio.h>

int main()
 {
    char cheese;
    float total = 8;

    printf("Do you want extra cheese (Y/N)? ");
    scanf(" %c", &cheese);

    if (cheese == 'Y' || cheese == 'y')
    {
        total += 1.5;
    }
    printf("\nTotal cost: %.2f $", total);
    return 0;
}
