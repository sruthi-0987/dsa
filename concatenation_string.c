#include<stdio.h>
int main()
{
	char a[10],b[5];
	scanf("%s \n %s",&a,&b);
	int s=0,i;
	for(i=0;a[i]!='\0';i++){
		s++;
		
	}
	for(i=0;a[i]!='\0';i++){
		a[s+i]=b[i];
	}
	printf("concatenated string is %s",a);
	return 0;
}
