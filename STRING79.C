#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
int i,j=0,len=0;
char s1[10],s2[10];
clrscr();

	printf("enter string for s1=");
	scanf("%s",s1);
	len = strlen(s1);

	printf("\n orignal string s1=%s",s1);
	printf("\n Length of s1= %d",len);


	for(i=len-1;s1[i]>0;i--)
	{

	      s2[j]=s1[i];
	      j++;

       }
	    s1[i]='\0';
		printf("\n Reverse string for s1=%s",s2);

getch();
}