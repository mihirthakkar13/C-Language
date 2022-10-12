#include <stdio.h>
#include <conio.h>

void main()
{
int i,a,j,space;
clrscr();

	printf("enter rows=");
	scanf("%d",&a);


	for(i=1;i<=a;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
			printf("\n");
	
	}
	
getch();
}
