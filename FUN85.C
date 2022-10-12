
//1 void
//2 int
//3
//4
//5
//6


#include<stdio.h>
#include<conio.h>

void fun1(int a[],int n)
{
int i;
clrscr();
	printf("enter elements in array =");
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

}
int fun2(int a[],int n)
{
int i,sum=0;
clrscr();

	printf("enter elements in array for sum=");
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
		return sum;

}


void fun3(int a[],int n)
{
int i,j,temp;
clrscr();


	printf("enter elements in array for asc=");
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
}

void fun4(int a[],int n)
{
int i,j,temp;
clrscr();
	printf("enter elements in array for des=");
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
		for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
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
}
void fun5(int a[],int n)
{
int i,k;
clrscr();
	printf("enter elements in array to search the element=");
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
}
void fun6(int a[],int n)
{
int i,pos,value;
clrscr();


	printf("enter elements in array to insert the no=");
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

}
void main()
{
int n,choice,a[10];
clrscr();

	printf("\t choices");
	printf("\n1.print array");
	printf("\n2.sum of array");
	printf("\n3.ascending order of array");
	printf("\n4.descending order of array");
	printf("\n5.search element in array");
	printf("\n6.insert element in array");

	printf("\n Enter your choice=");
	scanf("%d",&choice);


switch(choice)
{

case 1: fun1(a,n);
       break;

case 2: fun2(a,n);
	break;


case 3: fun3(a,n);
	break;

case 4: fun4(a,n);
	break;

case 5: fun5(a,n);
	break;

case 6: fun6(a,n);
	break;

default:printf("invalid input");

}

getch();
}
