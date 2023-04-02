#include<stdio.h>
#include<stdlib.h>
int a[100];
int i,n,pos,j,m;
int create();
int display();
int insert();
int del();
int sort();
int search();
int main()
{
	int ch;
	while(1)
	{
		printf("\n 1.create\n");
		printf("\n 2.display\n");
		printf("\n 3.insert\n");
		printf("\n 4.delete\n");
		printf("\n 5.sort\n");
		printf("\n 6.search\n");
		printf("\n 7.exit\n");
		printf("enter your choice:");
		scanf("%d",ch);
		switch(ch){
			case 1:
					create();
					break;
			case 2:
					display();
					break;
			case 3:
					insert();
					break;
			case 4:
					del();
					break;
			case 5:
					sort();
					break;
			case 6:
					search();
					break;
			case 7:
					exit();
					break;
			default:
					printf("INVALID OPTION");
		}
		
	}
}
int create()
{
	printf("\n enter the number of elements");
	scanf("%d",&n);
	printf("\n enter the value:");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
}
}
int display()
{
	printf("the elements are:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
int insert()
{
	printf("Enter the new value:\n");
	scanf("%d",&m);
	printf("enter the position to insert:\n");
	scanf("%d",&pos);
	for(i=n-1;i>=pos-1;i--)
	{
		a[i+1]=a[i];
	}
	a[pos-1]=m;
	n=n+1;
	
}
int del()
{
	printf("enter the location where you wish to delete:\n");
	scanf("%d",&pos);
	for(i=pos-1;i<n-1;i++){
		a[i]=a[i+1];
	}
	n=n+1;
	display();
	
}

