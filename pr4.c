#include <stdio.h>
int main(){
	int a,b,c,d,e;
	printf("enter your 5 subjects score:");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	printf("percentage of 5 subjects are: %d %%",((a+b+c+d+e)/500)*100);
	return 0;
	
}
