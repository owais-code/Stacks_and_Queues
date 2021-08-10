///OWAIS 15231///
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 3

void f_insert();
void r_insert();
void f_delet();
void r_delet();
void display();
int front=0,rear=-1,count=0,a[max];
void main()
{
int n;
clrscr();
printf("\n\t\t\t *****MAIN MENU*****");
printf("\n\t 1. Insert at front");
printf("\n\t 2. Insert at rear");
printf("\n\t 3. Delete from front");
printf("\n\t 4. Delete from rear");
printf("\n\t 5. Display");
printf("\n\t 6. Exit");
for(; ;)
{
printf("\n\t\t\t Enter your choice:-");
scanf("%d",&n);
switch(n)
{
case 1: f_insert();
break;
case 2: r_insert();
break;
case 3: f_delet();
break;
case 4: r_delet();
break;
case 5: display();
break;
case 6: exit(0);
  }
 }
}
void f_insert()
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

void r_insert()
{
int v;
if(count==max)
{
printf("\n\n Queue Overflow");
}
else
{
if(front == 1)
{
front = max;
}
printf("\n\n Enter value:");
scanf("%d",&v);
front =  front -1 ;
a[front]=v;
count = count + 1;
}
}

void f_delet()
{
int v;
if(count==0)
{
printf("\n\n Queue underflow");
}
else
{
if(rear == 1)
{
rear = max;
}
printf("\n\n %d is deleted",a[rear]);
rear = rear - 1;
count = count -1;
}
}

void r_delet()
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
if(front == -1)
{
 printf("\n QUEUE IS EMPTY");
}
printf("\n The elements of the queue are :- \n");
if(front <= rear )
{
while(front <= rear)
 {
 printf(" %d",a[front]);
front++;
 }
}
else
{
while(front <= max-1)
 {
 printf(" %d", a[front]);
front++;
 }
front = 0;
while(front <= rear)
 {
 printf(" %d",a[front]);
front++;
 }
}
printf("\n");
}