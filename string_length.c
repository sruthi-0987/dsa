#include<stdio.h>
int main(){
	char str[100];
	int i,l=0;
	printf("enter a word: ");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++){
		l++;
	}
	printf("length of the string is: %d",l);
	return 0;
}
