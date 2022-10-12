#include <stdio.h>
#include <conio.h>

void main()
{
int a;
clrscr();

	printf("enter marks=");
	scanf("%d",&a);
	
	if(a>=90&&a<=100)
	{
		printf("A GRADE");
	}

	if(a>=80&&a<90)
	{
		printf("B GRADE");
	}

	if(a>=60&&a<80)
	{
		printf("C GRADE");
	}

	if(a>=40&&a<60)
	{
		printf("D GRADE");
	}

	if(a<=40)
	{
		printf("FAIL");
	}

getch();
}
