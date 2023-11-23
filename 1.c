#include<stdio.h>


int call()
{
	printf("Function Lecture\n");
}

void add()
{
	int a,b;
	printf("Enter A & B : \n");
	scanf("%d %d",&a,&b);
	printf("Total is %d \n",a+b);

}


void multiplication(int a,int b) 
{
		printf("Total is %d",a*b);
}
main()
{
	call();
	
	
	
}