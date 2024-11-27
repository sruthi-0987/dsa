#include<stdio.h>
int main() {
	int i,n,s=0,avg;
	int a[5]={3,5,2,7,1};
	n=5;
	for(i=0;i<n;i++)
	{
		s=s+a[i];
	}
	avg=s/n;
	printf("average is: %d",avg);
	return 0;
	
}
