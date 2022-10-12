#include<stdio.h>
#include<conio.h>

void main()
{

FILE *f4;
int i,limit=50;
char s[100];
clrscr();

f4=fopen("string2.txt","w");

	printf("Data input=");


for(i=0;i<limit;i++)
{
	scanf("%s",s);
	fprintf(f4,s);
	fprintf("\n",f4);
}
fclose(f4);

printf("Data output=");
f4=fopen("string2.txt","r");

for(i=0;i<limit;i++)
{
	fscanf(f4,"%s",s);
}
printf("%s",s);
fclose(f4);
getch();
}
