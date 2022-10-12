#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],b[10][10],c[10][10],i,j,m,n,k;
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


	 for(i=0;i<n;i++)
	 {
	  for(j=0;j<m;j++)
	  {
	  c[i][j]=0;

	   for(k=0;k<n;k++)
	    {
	    c[i][j]+=a[i][k]*b[k][j];
	    }
	   }
	  }

	   printf("sum= \n");
	
	   for(i=0;i<n;i++)
	 {
		for(j=0;j<m;j++)
		{
			printf("%d ",c[i][j]);

		}
			printf("\n");
	 }
getch();
}














