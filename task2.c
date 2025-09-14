#include<stdio.h>
int main()
{
	int pizzas, total_cost=0 ;
	printf("How many Pizzas do you want(1, 2, or 3):");
	scanf("%d", &pizzas);
	if(pizzas==1)
	{
		total_cost = 8 ;
	}
	else if(pizzas==2)
    {
	total_cost = 15 ;
	}
	else if(pizzas==3)
    {
	total_cost = 21 ;
    }  
	else
	{
	printf("\nInvalid Choice.");   
    }
    printf("\nTotal Cost of %d Pizzas is %d $ .", pizzas ,total_cost);
    return 0 ;
}
