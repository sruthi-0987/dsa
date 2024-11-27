#include <stdio.h>
int main() {
	int a,b,c;
	printf("enter three numbers:");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b && b==c)
	  printf("three numbers %d,%d,%d are equal",a,b,c);
	else
	  printf("the numbers %d %d %d are not equal",a,b,c);
	return 0;
	  
}
