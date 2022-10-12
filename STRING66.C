#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
int i;
char ch[10];
clrscr();

	printf("enter string=");
	scanf("%s",ch);

	i=strlen(ch);
	printf("%d",i);

getch();
}