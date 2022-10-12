#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
int i;
char s1[100],s2[100];
clrscr();

	printf("enter string for s1=");
	scanf("%s",s1);
	printf("enter string for s2=");
	scanf("%s",s2);

	i=strcmp(s1,s2);
	 printf("compared value=%d",i);

getch();
}

