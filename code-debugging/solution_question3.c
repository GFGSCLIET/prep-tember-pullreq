#include <stdio.h>
void patternPrint(int n)
{
    // Outer loop for controlling the number of lines
    for (int i = 1; i <= n; i++)
    {
        // Inner loop for printing "1" values on each line
        for (int j = 1; j <= i; j++)
        {
            printf("1");
        }
        printf("\n");
    }
}

int main()
{
    int n = 4; 
    patternPrint(n); // Call the function to print the pattern
    return 0;
}
