#include <stdio.h>
void patternPrint(int n)
{
 int print=1,i,j;
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=i;j++)
  {
  printf("%d ",print);
  }
  printf("\n");
 }
}     
int main()
{
    int n;
    scanf("%d",&n);
    patternPrint(n);
    return 0;
}

/* Output: for n=4
           1
           1 1
           1 1 1
           1 1 1 1
*/