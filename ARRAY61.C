#include<stdio.h>
#include<conio.h>

void main()
{
int a[100],i,n,pos,value;
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

	printf("\n enter number to shift=");
	scanf("%d",&pos);
	
	printf("\n enter number=");
	scanf("%d",&value);

	for(i=n-1;i>pos-1;i--)
	{

		if(i>pos)
			a[i]=a[i-1];
		if(i==pos)
			a[i]=value;
		else
			a[i]=a[i];
	 }

	 for(i=0;i<n;i++)
	{
		printf("\n a[%d]=%d",i,a[i]);
	}


getch();
}












