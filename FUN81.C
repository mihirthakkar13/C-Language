// without argument 
//with return type



#include<stdio.h>
#include<conio.h>

int multi()
{
int a,b,c;

	printf("enter no for a=");
	scanf("%d",&a);
	printf("enter no for b=");
	scanf("%d",&b);

	c=a*b;


	return c;
}

void main()
{
int c;

clrscr();

c=multi();
	printf("Result=%d",c);
getch();
}





