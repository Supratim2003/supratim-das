#include<stdio.h>
int calculatepercentage(int science,int math,int sanskrit);
int main(){
	int sc=98;
	int math=95;
	int sanskrit=99;
	return 0;
}
int calculatepercentage(int science,int math, int sanskrit){
	return(science+math+sanskrit/3);
}
