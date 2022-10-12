#include<stdio.h>
#include<conio.h>

void fun1(int n)
{
clrscr();

	printf("1.Enter Amount for converstion OF US DOLLAR=");
	scanf("%d",&n);

	n=n*70;

	printf(" =%d RUPEES",n);

}

void fun2(int n)
{
clrscr();

	printf("2.Enter Amount for converstion OF CANADIAN DOLLAR=");
	scanf("%d",&n);

	n=n*53;

	printf(" =%d RUPEES",n);

}
void fun3(int n)
{
int i;
clrscr();

	printf("3.Enter Amount for converstion OF AUSTRALIAN DOLLAR=");
	scanf("%d",&n);

	n=n*48;

	printf(" =%d RUPEES",n);

}
void fun4(int n)
{
int i;
clrscr();

	printf("4.Enter Amount for converstion of LONDON POUND=");
	scanf("%d",&n);

	n=n*87;

	printf(" =%d RUPEES",n);

}
void fun5(int n)
{
int i;
clrscr();

	printf("5.Enter Amount for converstion OF EURO=");
	scanf("%d",&n);

	n=n*80;

	printf(" =%d RUPEES",n);

}
void fun6(int n)
{
int i;
clrscr();

	printf("6.Enter Amount for converstion OF DIRHAM=");
	scanf("%d",&n);

	n=n*20;

	printf(" =%d RUPEES",n);

}
void main()
{
int choice,n;
clrscr();

	printf("\t CHOICES");
	printf("\n1.COVERT TO US DOLLAR");
	printf("\n2.COVERT TO CANADIAN DOLLAR");
	printf("\n3.COVERT TO AUSTRALIAN DOLLAR");
	printf("\n4.COVERT TO LONDON POUND");
	printf("\n5.COVERT TO EURO");
	printf("\n6.COVERT TO UAE DIRHAM");



	printf("\nEnter your choice=");
	scanf("%d",&choice);

switch(choice)
{

case 1: fun1(n);
	break;

case 2: fun2(n);
	break;

case 3: fun3(n);
	break;

case 4: fun4(n);
	break;

case 5: fun5(n);
	break;

case 6: fun6(n);
	break;

default: printf("invalid input");
}



getch();
}





