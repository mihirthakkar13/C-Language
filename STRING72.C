#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
int i;
char s1[10],s2[10];
clrscr();

	printf("enter string for s1=");
	scanf("%s",s1);
	printf("enter string for s2=");
	scanf("%s",s2);

	strcat(s1,s2);
	printf("%s",s1);

getch();
}
