#include<stdio.h>
#include<conio.h>

void main()
{
int *p;
int n,i,no;
clrscr();


printf("Total no of elements=");
scanf("%d",&n);

p=(int*)calloc(n* sizeof(int));

if(p==NULL)
{
	printf("Memory not allocated");
}
else
{
	printf("\nMemory allocated successfully\n");

for(i=0;i<n;i++)
{
	printf("Enter no=");
	scanf("%d",&no);
	p[i]=i+1;

}

for(i=0;i<n;i++)
{
	printf("\nThe elements of array are=");
	printf("a[%d]=%d",i,p[i]);

}
}
getch();
}
