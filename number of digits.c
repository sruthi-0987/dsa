#include<stdio.h>
int main()
{
	int n;
	int i=0;
	printf("enter any number:");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		i++;
	}
	printf("\nlength of the given number is: %d",i);
	return 0;
}
