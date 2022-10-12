

//with argument 
// with return type

#include<stdio.h>
#include<conio.h>

int fact(int a)
{
int i,n=1;

	for(i=1;i<=a;i++)
	{
	n=n*i;
	}
	return n;

}
void main()
{
int j,a;
clrscr();
	
	printf("enter no for factorial=");
	scanf("%d",&a);

j=fact(a);


	printf("Factorial of %d is %d",a,j);

getch();
}