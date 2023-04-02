#include<stdio.h>
void linkfloat();
int main()
{
	struct book
	{
		char name; float price; int page;
	};
	struct book b[10];
	int i; int dh;
	for(i=0;i<=9;i++)
	{
		printf(" enter the name, price and pages \n");
		scanf("%c%f%d", &b[i].name, &b[i].price, &b[i].page);
		while((dh=getchar())!='\n');
	}
	for(i=0;i<=9;i++)
	printf("%c%f%d\n", b[i].name, b[i].price, b[i].page);
	return 0;
	
}
void linkfloat()
{
	float a=0,*b;
	b=&a; /*cause emulator to be linked*/
	a=*b; /*suppress the warning- variable not used*/	
}
