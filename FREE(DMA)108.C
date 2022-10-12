#include<stdio.h>
#include<conio.h>

void main()
{
int *p,*p1;
int i,n;
clrscr();


n=5;
printf("Enter total no of elements=%d",n);

p=(int*)malloc(n * sizeof(int));

p1=(int*)calloc(n * sizeof(int));

if(p==NULL || p1==NULL)
{
	printf("\nMemory not allocated");
}

else
{
	printf("\nMemory of malloc allocated successfully");

	free(p);
	printf("\nMemory of malloc freed successfully\n");

	printf("\nMemory of calloc allocated successfully");

	free(p1);
	printf("\nMemory of calloc freed successfully");

}

getch();

}
