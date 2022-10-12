#include<stdio.h>
#include<conio.h>

void main()
{
	
int f0,f1,f2,no,i;
clrscr();

	printf("enter number=");
	scanf("%d",&no);
	
	f0=0;f1=1;

	printf("%d",f0);
	printf("\n%d",f1);

	for(i=2;i<no;i++)
	{
		f2=f0+f1;
		printf("\n%d",f2);
		
		f0=f1;
		f1=f2;
	
	}

getch();

}
