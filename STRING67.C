#include<stdio.h>
#include<conio.h>
void main()
{
int i,counter=0;
char ch[100];

clrscr();

	printf("enter string=");
	scanf("%s",ch);

		for(i=0;ch[i]!='\0';i++)
		{
		 counter++;
		}

	     printf("%d",counter);


getch();
}