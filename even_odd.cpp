#include<stdio.h>
int main()
{
	int a;
	printf(" enter the number",a);
	scanf("%d",&a);
	if(a>0)
	{
		if(a%2==0)
		{
			printf("%d is even",a);
		}
		else
		{
			printf("%d is odd",a);
		}
	}
}
