#include <stdio.h>
#include <conio.h>

void main()
{
int a;
clrscr();

	printf("enter marks=");
	scanf("%d",&a);
	
switch(a/10)
{

case 10:

case 9: printf("GRADE A");
		break;
	
case 8:

case 7:printf("GRADE B");
		break;
	
case 6:

case 5: printf("GRADE C");
		break;

case 4:

case 3: printf("GRADE D");
		break;

default : printf("FAIL");

}

getch();

}
