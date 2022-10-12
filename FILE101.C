#include<stdio.h>
#include<conio.h>

void main()
{

FILE *f2;
int w;
char c;
clrscr();

f2=fopen("int.txt","w");

	printf("Data input=");

while((c=getchar())!=EOF)
{
	scanf("%d",&w);
	putw(w,f2);
}

fclose(f2);

	printf("Data ouput=");

f2=fopen("int.txt","r");

while((c=getw(f2))!=EOF)
{
	printf("%d\n",c);

}

fclose(f2);

getch();
}

