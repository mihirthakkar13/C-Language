#include<stdio.h>
#include<conio.h>

void pattern (int n,char c)
{

int i,j;


	for(i=1;i<=n;i++)
	{
	 for(j=1;j<=i;j++)
	 {
	   printf("%c ",c);
	 }
		printf("\n");
	}

}

void main()
{
int n,c;
clrscr();

	printf("enter number=");
	scanf("%d",&n);
	printf("enter character=");
	scanf("%s",&c);

pattern(n,c);

getch();
}










