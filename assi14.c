#include <stdio.h>

int main()

{

int i, n;

printf("Print all odd numbers till: ");

scanf("%d", &n);

printf("Even numbers from 0 to %d are: \n", n);

for(i=1; i<=n; i++)

if(i%1 == 0)

{

printf("%d\n", i);

}

}

