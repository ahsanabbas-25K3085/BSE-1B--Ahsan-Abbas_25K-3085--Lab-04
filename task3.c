#include <stdio.h>

int main()
 {
    int pizzas, total = 0;

    printf("How many pizzas (1, 2, or 3)? ");
    scanf("%d", &pizzas);

    if (pizzas == 1)
        total = 8;
    else if (pizzas == 2)
        total = 15;
    else if (pizzas == 3)
        total = 21;
    else {
        printf("\nInvalid choice.");
        return 0;
    }

    printf("\nTotal cost for %d pizzas: $%d", pizzas, total);
    return 0;
}
