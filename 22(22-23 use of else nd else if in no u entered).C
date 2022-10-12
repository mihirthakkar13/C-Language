#include <stdio.h>
#include <conio.h>

void main()
{
	
int a;
clrscr();

	printf("enter number=");
	scanf("%d" ,&a);

	if(a==1)
	{
		printf("you have entered one");
	}

	else if(a==2)
	{
	printf("you have entered two");
	}

	else if(a==3)
	{
		printf("you have entered three");
	}

	else
	{
		printf("invalid input");
	}


getch();
}
