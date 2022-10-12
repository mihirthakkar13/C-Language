#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],b[10][10],i,j,m,n,temp,k;
clrscr();

	printf("enter row size=");
	scanf("%d",&n);
	printf("enter column size=");
	scanf("%d",&m);

	for(i=0;i<n;i++)
	{
	 for(j=0;j<m;j++)
	  {
	   printf("enter number for A=");
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
	     for(k=0;k<n;k++)
	     {

	     b[i][j]=a[j][i];
	     }
	    }
	   }
	    printf("B=\n");


	    for(i=0;i<n;i++)
	     {
		for(j=0;j<m;j++)
		{
			printf("%d ",b[i][j]);
		}
			printf("\n");
	     }

getch();
}
















