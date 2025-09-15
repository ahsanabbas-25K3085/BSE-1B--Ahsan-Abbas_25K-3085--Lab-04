#include <stdio.h>

int main() 
{
    int size;
    printf("Choose pizza size (1. Small, 2. Medium, 3. Large): ");
    scanf("%d", &size);

    if (size == 1)
        printf("\nYou chose Small pizza.");
    else if (size == 2)
        printf("\nYou chose Medium pizza.");
    else if (size == 3)
        printf("\nYou chose Large pizza.");
    else
        printf("\nInvalid size.");

    return 0;
}

