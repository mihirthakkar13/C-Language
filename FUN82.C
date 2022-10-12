
//with argument 
//without return type


#include<stdio.h>
#include<conio.h>

void oddeven (int n)
{

	if(n%2==0)
	{
	 printf("entered no is even");
	 }
	 else
	 {
	 printf("entered no is odd");
	 }


}

void main()
{
int n;
clrscr();
	
	printf("enter no=");
	scanf("%d",&n);


oddeven(n);

getch();
}