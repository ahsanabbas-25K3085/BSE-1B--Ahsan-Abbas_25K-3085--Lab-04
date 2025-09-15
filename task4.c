#include <stdio.h>

int main()
 {
    int crust;
    float total = 8; 

    printf("Choose crust (1. Regular $0, 2. Thin $1, 3. Stuffed $2): ");
    scanf("%d", &crust);

    if (crust == 1)
        total += 0;
    else if (crust == 2)
        total += 1;
    else if (crust == 3)
        total += 2;
    else {
        printf("\nInvalid crust.");
        return 0;
    }

    printf("\nNew total cost: $%.2f", total);
    return 0;
}
