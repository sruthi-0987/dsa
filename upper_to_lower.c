#include<stdio.h>
int main() {
	char a[5];
	scanf("%s",&a);
	int i;
	for(i=0;a[i]!='\0';i++){
		a[i]=a[i]+32;
	}
	printf("new string is %s",a);
	return 0;
}
