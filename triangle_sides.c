#include <stdio.h>
int main() {
	int a,b,c;
	printf("enter the values of sides of the triangle:");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b && b==c)
	  printf("the given triangle %d %d %d is equilateral triangle",a,b,c);
	else if(((a==b && b!=c)||(b==c&&a!=c))||((a==c)&& a!=b))
	  printf("the given triangle %d %d %d is an isoceles triangle",a,b,c);
	else
	  printf("the given triangle %d %d %d is a scalen triangle",a,b,c);
	return 0; 
}
