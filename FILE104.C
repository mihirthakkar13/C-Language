#include<stdio.h>
#include<conio.h>

void main()
{

FILE *f5;
int i,limit=80,character=0,lines=0,words=0;

char s;

clrscr();

/*
printf("Data output=");

f5=fopen("counting.txt","w");

while((s=getchar())!=EOF)
{
	scanf("%c",&s);
	putc(s,f5);
}
fclose(f5);

*/

f5=fopen("counting.txt","r");

while((s=getc(f5))!=EOF)
{

	printf("%c",s);

	if(s=='\n'|| s=='\0')
	lines++;

	if(s==' '|| s=='\t' || s=='\n' || s=='\0')
	 words++;


	if(s!=' ' || s!='\n')
	character++;
}

fclose(f5);


    printf("\ntotal no of lines=%d\n",lines);
	printf("\ntotal no of words=%d\n",words);
    printf("\ntotal no of character=%d\n",character);


getch();
}

