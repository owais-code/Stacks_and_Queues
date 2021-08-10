#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 3

void insert();
void delet();
void display();
int front=0,rear=-1,count=0,a[max];
void main()
{
int n;
clrscr();
printf("\n\t\t\t *****MAIN MENU*****");
printf("\n\t 1. Insert");
printf("\n\t 2. Delete");
printf("\n\t 3. Display");
printf("\n\t 4. Exit");
for(; ;)
{
printf("\n\t\t\t Enter your choice:-");
scanf("%d",&n);
switch(n)
{
case 1: insert();
break;
case 2: delet();
break;
case 3: display();
break;
case 4: exit(0);
  }
 }
}
void insert()
{
int v;
if(count==max)
{
printf("\n\n Queue Overflow");
}
else
{
if(rear==max)
{
rear=0;
}
printf("\n\n Enter value:");
scanf("%d",&v);
rear++;
a[rear]=v;
count++;
}
}
void delet()
{
if(count==0)
{
printf("\n\n Queue underflow");
}
else
{
if(front==max)
{
front=0;
}
printf("\n\n %d is deleted",a[front]);
front++;
count--;
}
}
void display()
{
int i;
printf("\n");
if (front == -1 && rear == -1)
 printf ("\n QUEUE IS EMPTY");
else
{
 if(front<rear)
 {
 for(i=front;i<=rear;i++)
 printf("\t %d", a[i]);
 }
 else
 {
 for(i=front;i<max;i++)
 printf("\t %d", a[i]);
for(i=0;i<=rear;i++)
 printf("\t %d", a[i]);
 }
}
}