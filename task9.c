#include<stdio.h>
int main()
{
	int size , pizzas ,crust , time , option ;
	float total = 0 ;
	char cheese , student ;
	
	printf("Chose Pizza Size( 1.Small 8$, 2.Medium 10$, 3.Large 12$):");
	scanf("%d",&size);
	if(size==1)
	{
		total = 8 ;
	}
	else if(size==2)
	{
		total = 10;
	}
	else if(size==3)
	{
		total = 12;
	}
	else
	{
		printf("\nInvalid Choice!");
	}
	
	printf("\nHow many Pizzas?");
	scanf("%d",&pizzas);
	total*=pizzas ;
	
	printf("\nchose crust(1.Regular 0$, 2.Thin 1$, 3.Stuffed 2$):");
	scanf("%d",&crust);
	if(crust==2)
	{
		total+=pizzas*1 ;
	}
	else if(crust==3)
	{
		total+=pizzas*2 ;
	}
	else
	{
		total+=0;
	}
	
	printf("\nExtra Chese(Y or N):");
	scanf(" %c",&cheese);
	if(cheese=='Y' || cheese=='y')
	{
	total+=pizzas*1.5;
    }
	
	printf("\nEnter current time(0-23):");
	scanf("%d", &time);
	if(time>11 && time<14)
	{
		total-=total*0.10 ;
	}
	printf("\nDo you have aStudent ID(Y/N):?");
	scanf(" %c",&student);
	if(student=='Y'|| student=='y')
	{
		total-=2;
	}
	
	printf("\n(1)Pickup or (2)Delivery ?");
	scanf("%d",&option);
	if(option==2)
	{
		total+=3 ;
	}
	else
	{
		total+=0 ;
	}
	
	if(pizzas==3 && crust==3)
	{
		printf("\nYou get free garlic bread!");
	}
	
	printf("\n===Receipt====");
	printf("\nTotal amount:%.2f $", total);
	return 0;
	
	}
	
