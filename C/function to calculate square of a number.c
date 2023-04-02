#include<stdio.h>
int calcsquare();
int main(){
	int n;
	printf("enter the no to clculate square of a no:");
	scanf("%d",&n);
	printf("square is :%d",calcsquare(int n));
	return 0;
}
int calcsquare(int n){
	return n*n;
}
