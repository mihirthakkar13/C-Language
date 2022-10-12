#include <stdio.h>
#include <conio.h>
void main()
{
int i,a,n=1;
clrscr();

	printf("enter no=");
	scanf("%d",&a);
	
	i=1;
	while(i<=a)
	{
		n=n*i;
		i++;
	}
	printf("Factorial of %d is %d",a,n);

getch();
}