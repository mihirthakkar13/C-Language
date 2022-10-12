#include<stdio.h>
#include<conio.h>

void main()
{

int i;
int *j;
j=&i;
clrscr();

	printf("enter no=");
	scanf("%d",&i);


if(i%2==0)
{

	printf("THE NO IS EVEN=%u",*j);

}

else
{
	printf("THE NO IS ODD=%u",*j);

}

getch();
}