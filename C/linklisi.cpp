#include<stdio.h>
#include<stdlib.h>
//#include<alloc.h>
#include<conio.h>
void create(int data);
void display();
void reverse();
struct node
{
int info;
struct node *link;
};
struct node *start;
int main()
{
int ch,n,i,m;
start=NULL;
while(1)
{
printf(" \n.......MENU.......\n");
printf("1.create \n");
printf("2.display \n");
printf("3.reverse \n");
printf("4.exit \n");
printf("\n enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf(" enter the no. of nodes to create\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 printf(" Enter informations \n ");
scanf("%d",&m);
create(m);
}
break;
case 2:
display();
break;
case 3:
reverse();
break;
case 4:
exit(0);
break;
default:
printf("\n Invalid choise\n");
 break;
}
 }
}
void create(int data)
{
struct node *temp,*q;
temp=(struct node*)malloc(sizeof(struct node));
temp->info=data;
temp->link=NULL;
if(start==NULL)
{
start=temp;
}
else
{
q=start;
while(q->link!=NULL)
{
q=q->link;
}
q->link=temp;
}
}
void display()
{
struct node *q;
if(start==NULL)
{
printf(" \n list is empty");
return;
}
 else
 {
 q=start;
 }
printf(" \n the elements are:\n");
while(q!=NULL)
{
printf("%d\t",q->info);
q=q->link;
}
printf("\n");
}
void reverse()
{
struct node *p1, *p2, *p3;
if(start == NULL)
{
return;
}
p1 = start;
p2 = p1->link;
p3 = p2->link;
p1->link = NULL;
p2->link = p1;
while(p3 != NULL)
{
p1 = p2;
p2 = p3;
p3 = p3->link;
p2->link = p1;
}
start = p2;
display();
}
