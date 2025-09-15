#include <stdio.h>

int main()
 {
    int pizzas, crust;

    printf("How many pizzas? ");
    scanf("%d", &pizzas);

    printf("Choose crust (1. Regular, 2. Thin, 3. Stuffed): ");
    scanf("%d", &crust);

    if (pizzas == 3 && crust == 3)
    {
        printf("\nYou get free garlic bread!");
    }
    return 0;
}
