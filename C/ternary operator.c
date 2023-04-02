#include<stdio.h>
int main()
{
	int age;
	printf("enter the age:");
	scanf("%d",&age);
	age>18 ? printf("adult \n"):printf("not adult");
	int num=7;
	int luckynum=7;
	num==luckynum? printf("you are lucky \n"):printf("you are not lucky");
	return 0;
}
