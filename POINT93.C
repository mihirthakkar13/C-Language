#include<stdio.h>
#include<conio.h>

void main()
{

int i=3;
clrscr();

printf("Address of i=%u",&i);
printf("\nValue of i=%d",i);
printf("\nValue of i=%d",*(&i));



getch();
}
