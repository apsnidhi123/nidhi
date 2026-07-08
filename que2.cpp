#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int a, b, c, m;
    printf("You're Welcome\n");
    nidds:
    printf("To check whether a number is divisible by both 3 & 7.\n");
    printf("Enter any number: ");
    scanf("%d", &a);

    if (a % 3 == 0 && a % 7 == 0)
        printf("Divisible by both 3 and 7\n");
    else
        printf("Number is not divisible by both\n");
		printf("\nDo you want to try again press 0\n");
			printf("Do you want to continue press 1\n");
		scanf("%d", &c);
		system("cls");
		if ( c == 0)
		goto nidds;
		if (c == 1)
		system("cls");
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	
	nidds2:
    printf("\nTo check whether a number is greater than 100 and less than 500.\n");
    printf("\nEnter any number: ");
    scanf("%d", &b);

    if 
    (b > 100 && b < 500)
        printf("Number is greater than 100 and less than 500\n");
    else
        printf("Number is not greater than 100 and less than 500\n");
        
        printf("\nDo you want to try again press 0\n");
			printf("Do you want to continue press 1\n");
        scanf("%d", &c);
        system("cls");
		if ( c == 0)
		goto nidds2;
		if (c == 1)
		system("cls");
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		nidds3:
		printf("\nTo check whether a student is pass, fail, or distinction based on marks\n");
	   printf("Enter your obtained marks(0-100): ");
    scanf("%d", &m);

    if (m < 0 || m > 100) 
    {
        printf("Invalid marks entry!");
    }
    else if (m < 33) 
    {
        printf("FAIL");
    }
    else if (m >= 75) 
    {
        printf("Distinction");
    }
    else 
    {
        printf("PASS");
    }
    printf("\nDo you want to try again press 0\n");
			printf("Do you want to continue press 1\n");
        scanf("%d", &c);
        system("cls");
		if ( c == 0)
		goto nidds3;
		if (c == 1)
		system("cls");
		printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    getch ();
    return 0;
}
