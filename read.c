//Devamrita p
//Dept. of statistics
//04/01/25
//read a number and check whether it is odd or even using functions
#include<stdio.h>
void oddeven(int);
int main()
{
	int number;
	printf("enter a number ");
	scanf("%d",&number);
	printf("\n the number entered is %d ",number);
	oddeven(number);
	return 0;
}
void oddeven(int number)
{
	if(number%2==0)
	{
		printf("\nthe number is even");
	}
	else
	{	
		printf("\n the number entered is odd");
	}
}
