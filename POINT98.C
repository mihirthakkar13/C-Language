#include<stdio.h>
#include<conio.h>

void main()
{

int i,a[10],n;

int *b;
int *m;

b=a;
m=&n;
clrscr();

	printf("Enter total no of elements in array=");
	scanf("%d",&n);


	for(i=0;i<*m;i++)
	{

		printf("Enter number=");
		scanf("%d",&*b);
		b++;

	}
	b=a;
	for(i=0;i<*m;i++)
	{

		printf("\n a[%d]=%d",i,*b);
		b++;
	}


getch();
}