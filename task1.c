#include<stdio.h>
int main()
{
	int pizzas ;
	printf("How many Pizzas do you want:");
	scanf("%d", &pizzas);
	if(pizzas>1)
	{
		printf("\nCheck our multi_pizza deals.");
	}
	else
	printf("\nYour total is 8$. ");
	return 0;
	
}
