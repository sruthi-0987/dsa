#include <stdio.h>
int main() {
	float a,b,c;
	printf("enter three different numbers: ");
	scanf("%f %f %f",&a,&b,&c);
	if (a>=b && a>=c)
	  printf("%f is the largest number.",a);
	if (b>=a && b>=c)
	  printf("%f is the largest number.",b);
	if(c>=a && c>=b)
	  printf("%f is the largest number.",c);
	return 0;  
}
