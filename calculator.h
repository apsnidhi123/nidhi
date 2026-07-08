#include<stdio.h>
#include<conio.h>
int main()
{
	float a,b;
	int c;
	printf("CALCULATOR FOR(+,-,*,/) \n \n");
	printf("Enter 1 for addition \n");
	printf("Enter 2 for subtraction \n");
	printf("Enter 3 for multiplication \n");
	printf("Enter 4 for division \n \n");
	printf("Enter any number:");
	scanf("%d",&c);
	switch(c)
	{
	case 1:
	{
		printf("Enter any two number: ");
		scanf("%f %f" , &a, &b);
		printf("Addition = %.2f",a+b);
		break;
	}
	case 2:
	{
		printf("Enter any two number: ");
		scanf("%f %f" , &a, &b);
		printf("Subtraction = %.2f",a-b);
		break;
		}
	case 3:
	{
		printf("Enter any two number: ");
		scanf("%f %f" , &a, &b);
		printf("Multiplication =%.2f",a*b);
		break;
		}
	case 4:
	{
		printf("Enter any two number: ");
		scanf("%f %f" , &a, &b);
		
		if (b != 0) 
		{
        printf("Division = %.2f", a/b);
        } 
        if(b==0) 
        {
        printf("Division by zero is not possible.");
		break;
	    }
	}
	    default:
	    {
	    	printf("Invalid");
	    	break;
	    	}
	}
	getch();
}
