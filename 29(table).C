#include <stdio.h>
#include <conio.h>

void main()
{

int a,i;
clrscr();

	printf("enter=");
	scanf("%d",&a);

	for(i=1;i<=10;i++)
	{
		printf("\n%d*%d=%d",a,i,a*i);
	}


getch();
}


