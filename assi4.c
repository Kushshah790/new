#include<stdio.h>
#define PI 3.141
int main()
{
	float radius, area;
	printf("Enter raidus of circle \n");
	scanf("%f", &radius);
	area = PI*radius*radius;
	printf("Area of circle : %0.4f\n", area);
	
}
