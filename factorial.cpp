#include<stdio.h>
int main()
{
	int a,i;
	int fact=1;
	printf(" enter the number:",a);
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	printf(" %d is the factorial of %d",fact,a);
}
