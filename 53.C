#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,j,counter=2;
clrscr();

	printf("enter number=");
	scanf("%d",&a);

	for(i=2;i<=a;counter++)
	{

		for(j=2;j<=i;j++)
		{

			if(i%j==0)
			{
				break;
			}
		}

			if(counter==j)
			{
				printf("\n%d",counter);
				i++;
			}

	}


getch();
}



