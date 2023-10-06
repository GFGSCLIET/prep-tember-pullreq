#include <stdio.h>
void patternPrint(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("1 ");
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    patternPrint(n);
    return 0;
}
