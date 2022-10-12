#include <stdio.h>
#include <conio.h>

void main()
{
int a,i,j;
clrscr();

	printf("enter=");
	scanf("%d",&a);
	
	for(i=a;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{	
			printf(" * ");
		}
		
			printf("\n");

}

getch();
}