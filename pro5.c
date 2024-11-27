#include <stdio.h>
int main(){
	int a,b,c;
	printf("enter two integers:");
	scanf("%d %d",&a,&b);
	printf("given values of a,b are: %d %d \n",a,b);
	c=a;
	a=b;
	b=c;
	printf("values of a and b after swapping is: %d %d",a,c);
	return 0;
	
}
