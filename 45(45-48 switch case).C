#include <stdio.h>
#include <conio.h>

void main()
{
int x;
clrscr();

	printf("enter no=");
	scanf("%d",&x);

switch (x)

{
case 1 : printf("you have entered one");
	break;

case 2 : printf("you have entered two");
	break;

case 3 : printf("you have entered three");
	break;

default : printf("invalid input");
     
}

getch();
}