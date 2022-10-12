#include<stdio.h>
#include<conio.h>

void main()
{
FILE *f3;
//char ch[100];
char c;
clrscr();

f3=fopen("string.txt","w");

printf("Data input=");

while((c=getche())!=EOF)
{
       //	scanf("%s",c);
	fputc(c,f3);
}

fclose(f3);
printf("Data output=");

f3=fopen("string.txt","r");

while((c=getc(f3))!=EOF)
{

	printf("%s",c);
}

fclose(f3);

getch();
}