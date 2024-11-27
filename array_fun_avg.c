#include<stdio.h>
int fun(int);
int func(int);
int main(){
	int i,avg,sum=0;
	int a[]={1,2,3,4,5};
	for(i=0;i<5;i++){
		fun(a[i]);
	}
	for(i=0;i<5;i++){
		sum=sum+func(a[i]);
	}
	avg=sum/5;
	printf("\nthe avg is:%d",avg);
	return 0;
	
}
int fun(int m){
	printf("%d",m);
}
int func(int p){
	return p;
}
