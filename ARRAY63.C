

//sum for 2-D

#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],b[10][10],c[10][10],i,j,m,n,sum;
clrscr();

	printf("enter row size=");
	scanf("%d",&n);
	
	printf("enter column size=");
	scanf("%d",&m);

	for(i=0;i<n;i++)
	{
	 for(j=0;j<m;j++)
	 {
		printf("enter no for A=");
		scanf("%d",&a[i][j]);
	 }
	}



		for(i=0;i<n;i++)
		{
		 for(j=0;j<m;j++)
		  {
			printf("%d ",a[i][j]);

		  }
			printf("\n");
		}




	for(i=0;i<n;i++)
	{
	 for(j=0;j<m;j++)
	 {
		printf("enter no for B=");
		scanf("%d",&b[i][j]);
	 }
	}


	 for(i=0;i<n;i++)
	 {
	  for(j=0;j<m;j++)
	  {
		printf("%d ",b[i][j]);

	  }
		printf("\n");
	 }
	   
	printf("sum= \n");
	 for(i=0;i<n;i++)
	 {
	  for(j=0;j<m;j++)
	  {
	   sum=a[i][j]+b[i][j];
	   printf("%d " ,sum);
	   }
	   printf("\n");
	   }

getch();
}











