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

	strrev(s1);
	printf("string in reverse=%s",s1);

getch();
}