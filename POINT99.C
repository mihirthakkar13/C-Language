#include<stdio.h>
#include<conio.h>

void main()
{

int i,a[10],n,sum=0;

int *b,*k;
int *m;


b=a;
m=&sum;
k=&n;

clrscr();

	printf("Enter total no of elements in array=");
	scanf("%d",&n);


	for(i=0;i<*k;i++)
	{

		printf("Enter number=");
		scanf("%d",&*b);
		b++;
	}
	b=a;

	for(i=0;i<*k;i++)
	{
		printf("\n a[%d]=%d",i,*b);

		sum=sum+*b ;
		b++ ;
	}

	printf("\nSum=%d",*m);


getch();
}