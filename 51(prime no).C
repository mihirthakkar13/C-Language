#include<stdio.h>
#include<conio.h>

void main()
{
	
int a,i,j;
clrscr();

	printf("enter number=");
	scanf("%d",&a);

	for(i=2;i<=a;i++)
	{

		for(j=2;j<=i;j++)
		{
			if(i%j==0)
			{
				break;
			}

		}


		if(j==i)
		{
			printf("%d\n",i);

		}
		
	
	}


getch();

}



