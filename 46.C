#include <stdio.h>
#include <conio.h>
void main()
{
char x;
clrscr();

	printf("enter character=");
	scanf("%c",&x);


switch(x)
{
case 'a' : printf("you have entered character A");
	break;

case 'b': printf("you have entered character B");
	break;

case 'c' : printf("you have entered  character C");
	break;

default: printf("invalid input");
}
getch();
}