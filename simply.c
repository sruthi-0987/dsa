#include<stdio.h>
main(){
	int *ptr,a=2,y;
	ptr=&a;
	y=*ptr;
	printf("%d is stored in %u\n",a,ptr);
	printf("%d is stored in %u",*ptr,ptr);
	
	return 0;
}
