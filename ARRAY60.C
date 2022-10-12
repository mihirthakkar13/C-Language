#include<stdio.h>
#include<conio.h>

void main()
{

int a[100],i,j,n,k=1;
clrscr();
	
	printf("enter total no of elements in array=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter number=");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("\n a[%d]=%d",i,a[i]);
	}
	
	printf("\n search the no=");
	scanf("%d",&k);
	
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			printf("%d is located at location a[%d]",k,i);
		}
    }
	
	
getch();

}







