#include<stdio.h>
#include<conio.h>

void main()
{
int i=0,j;
char s1[10],s2[10];
clrscr();


	printf("enter string for s1=");
	scanf("%s",s1);

	for(i=0;i<s1[i];i++)
	{

	s2[i]=s1[i]-32;
	}
	printf("Upper case strin for s1=%s",s2);



getch();
}