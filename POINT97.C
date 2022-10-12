#include<stdio.h>
#include<conio.h>

void main()
{
int i,a,n=1;
int *j,*b;

j=&n;
b=&a;

clrscr();

	printf("enter no for factorial=");
	scanf("%d",b);

	for(i=1;i<=*b;i++)
	{
	n=n*i;
	}

	printf("Factorial of %d is %d",*b,*j);

getch();
}