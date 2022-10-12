#include <stdio.h>
#include <conio.h>

void main()
{

int i,a,n=1;
clrscr();

	printf("enter number=");
	scanf("%d",&a);

	for(i=1;i<=a;i++)
	
	{
		
		n=n*i;
	
	}
	
	printf("%d",n);


getch();
}