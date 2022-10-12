#include<stdio.h>
#include<conio.h>

void main()
{
int i,j;
char s1[10],s2[10];
clrscr();

	printf("enter string for s1=");
	scanf("%s",s1);
	printf("enter string for s2=");
	scanf("%s",s2);

	for(i=0;s1[i]!='\0';i++);
	{
	 for(j=0;s2[j]!='\0';j++)
	 {
		s1[i]=s2[j];
		i++;
	 }
	}
	s1[i]='\0';
	printf("Concated string=%s",s1);

getch();
}
