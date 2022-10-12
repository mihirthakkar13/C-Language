#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,n,sum=0;
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


	sum=sum+a[i];
	}
	printf("\nsum=%d",sum);

getch();
}








