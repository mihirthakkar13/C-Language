#include <stdio.h>
#include <conio.h>
void main()
{

int n,i,j,k=1;
clrscr();

	printf("enter =");
	scanf("%d",&n);

	for(i=n;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d",k);
			k++;
		}
		
			printf("\n");


	}

getch();
}
