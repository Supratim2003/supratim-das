#include<stdio.h>
#include<stdlib.h>
#define N 10
int que[N];
int f=-1,r=-1;
int enque();
int deque();
int dis();
int main()
{
	int s;
	while(1)
	{
		printf("\n enter 0 to exit\n");
		printf("\n enter 1 to enque\n");
		printf("\n enter 2 to deque\n");
		printf("\n enter 3 to display\n");
		printf("\n enter your choice:\n");
		scanf("%d",&s);
		switch(s)
		{
			case 0:
				exit(0);
				break;
			case 1:
				enque();
				break;
			case 2:
				deque();
				break;
			case 3:
				dis();
				break;
			default:
				printf("\n **** INVALIDE OPETION**** \n");
				
		}
	}
	return(0);
}
int enque()
{
	if(r=N-1)
	{
		printf("\n ****QUEUE IS OVER FLOW****\n");
	}
	if((f==-1)&&(r==-1))
	{
		f++;
		r++;
	}
	else
	{
		r++;
	}
	printf("\n enter the number:");
	scanf("%d",&que[r]);
	return(0);
	
}
int deque()
{
	if(r==-1)
	{
		printf("\n ****QUEUE IS EMPTY**** \n");
		return(0);
	}
	printf("ITEM DEQUE=%d",que[f]);
	if(f==r)
	{
		f=-1;
		r=-1;
	}
	else{
		f++;
		return(0);
	}
}
int dis()
{
	int i;
	if(f==-1)
	{
		printf("\n ***QUEUE IS EMPTY*** \n");
		return(0);
	}
	for(i=f;i<r;i++)
	printf("%d \n",que[i]);
	return (0);
}
