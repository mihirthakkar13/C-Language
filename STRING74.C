#include<stdio.h>
#include<stdio.h>
#include<string.h>

void main()
{
int i;
char s1[10];
clrscr();

	printf("enter string for s1=");
	scanf("%s",s1);

	strupr(s1);
	printf("string in upper case=%s",s1);

getch();
}