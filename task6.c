#include <stdio.h>

int main()
 {
    int time;
    float total = 20; 

    printf("Enter current time (0-23): ");
    scanf("%d", &time);

    if (time >= 11 && time <= 14)
	 {
        total = total - (total * 0.10);
        printf("\nDiscount applied! New total: $%.2f", total);
    } 
	else 
	{
        printf("\nNo discount. Total: $%.2f", total);
    }

    return 0;
}
