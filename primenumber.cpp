#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("enter the number",n);
	scanf("%d",&n);
	if(n>2)
	{
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			printf("%d is prime number",n);
		}
		else
		{
			printf("%d is not a prime number",n);
		}
	}
	else
	return 0;
}
