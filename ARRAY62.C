
// 2-D ARRAY

#include<stdio.h>
#include<conio.h>

void main()
{
int a[10][10],i,j,n,m;
clrscr();

	printf("enter row size=");
	scanf("%d",&n);
	
	printf("enter column size=");
	scanf("%d",&m);

	for(i=0;i<n;i++)
	{

	 for(j=0;j<m;j++)
	 {
		printf("enter no =");
		scanf("%d",&a[i][j]);

	 }
	
	}

	   for(i=0;i<n;i++)
	   {

		for(j=0;j<m;j++)
		{
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	   }




getch();
}









