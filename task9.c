#include <stdio.h>

int main()
 {
    int option;
    float total = 20;

    printf("Pickup (1) or Delivery (2)? ");
    scanf("%d", &option);

    if (option == 2)
    {
        total += 3;
    }
    printf("\nFinal cost: $%.2f", total);
    return 0;
}
