#include <stdio.h>

int main()
{
    int i, n;
    long fac = 1;
    
    printf("Please Enter any number to Find Factorial = ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++)
    {
        fac = fac * i;
    }
    printf("\nFactorial of %d = %ld\n", n, fac);
}