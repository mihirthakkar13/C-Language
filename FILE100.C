#include<stdio.h>
#include<conio.h>

void main()
{
	
FILE *f1;
char c;

f1=fopen("char.txt","w");

	printf("Data input");


while((c=getchar())!=EOF)
{
		putc(c,f1);
}

fclose(f1);


      printf("Data output");

f1=fopen("char.txt","r");

while((c=getc(f1))!=EOF)
{
	printf("%c",c);

}

fclose(f1);

getch();
}
