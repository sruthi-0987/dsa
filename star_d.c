#include<stdio.h>
int main() {
	int i,j,s;
	for(i=0;i<5;i++)
	{
		for(s=0;s<i+1;s++)
	    printf(" ");
	    for(j=0;j<10-2*i-1;j++)
	    printf("*");
	printf("\n");
    }
    return 0;
}
