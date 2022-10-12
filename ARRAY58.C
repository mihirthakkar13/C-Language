

//accending order no


#include<stdio.h>
#include<conio.h>

void main()
{
int a[100],i,j,n,temp;
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
			printf("\na[%d]=%d",i,a[i]);

	    }
		
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}

	for(i=0;i<n;i++)
	{

			printf("\n%d",a[i]);

	}

getch();
}







