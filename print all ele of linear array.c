#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i;
	printf("Enter the array elements:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Entered array elements are: \t");
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	getch();
}
