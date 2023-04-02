#include<stdio.h>
int a[100];
int n,val,i,j,element,pos,temp;
void create();
void display();
void insert();
void del();
void sort();
void search();

int main()
{
	int ch;
	while(1)
	{
		printf("\n.........Menu.......");
		printf("1. create\n");
		printf("2. display\n");
		printf("3. insert\n");
		printf("4. delete\n");
		printf("5. sort\n");
		printf("6. search\n");
		printf("\n enter your choice:");
		scanf("%d", &ch);
		switch(ch)
		{
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
			default:
				printf("invalid opetion");	
		}
	}
	return 0;
}
void create()
{
	printf("\n enter the number of elements");
	scanf("%d", &n);
	printf("\n enter the value ");
	for(i=0;i<n;i++)
	scanf("%d", &a[i]);
}
void display()
{
	printf("\n the elements are:");
	for(i=0;i<=n;i++)
	printf("%d\t", a[i]);
}
void insert()
{
	printf("enter the position where the element to be inserted");
	scanf("%d", &val);
	for(i=n-1;i>=pos-1;i--)
	{
		a[i+1]=a[i];
	}
	a[pos-1]=val;
	n=n+1;
}
void del()
{
	printf("enter the location where you wish to delete element-\n");
	scanf("%d", &pos);
	for(i=pos-1;i<=n-1;i++)
	a[i]= a[i+1];
	n--;
}
void sort()
{
	for(i=0;i<=n;i++)
	{
		for(j=i+1;j<n;++j)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
void search()
{
	printf("enter element to search");
	scanf("%d",& element);
	for(i=0;i<n;i++)
	{
		if(a[i]==element)
		{
			pos=i;
			break;
		}
	}
	printf("the position of the element is %d", pos+1);
}
