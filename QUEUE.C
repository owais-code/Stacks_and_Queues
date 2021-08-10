#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define max 5

void insert();
void delet();
void display();
int front = 0, rear = -1, a[max]; 
void main()
 {
int n;
clrscr();
printf("\n\t\t\t *****MAIN MENU*****");
printf("\n\t 1. PUSH");
printf("\n\t 2. POP");
printf("\n\t 3. DISPLAY");
printf("\n\t 4. EXIT");
printf("\n \t\t\tEnter your option: ");
for(;;)
{
printf("\n\n\t\t Choose Option: ");
scanf("%d", &n);
switch(n)
{
case 1: insert();
        break;
case 2: delet();
        break;   
case 3: display();
        break ;
case 4: exit(0);
}      
}
 }
void insert()
  {
      int val;
      if(rear == max-1)
  {
  printf("\n\n\t Queue Overflow");
  } 
  else
  {
      printf("\n\n\t Enter numeber:");
      scanf("%d", &val);
      rear++;
      a[rear] = val;
   }
  }       

  void delet()
  {
      if (front > rear)
      {
          printf("\n\n\t Stack underflow");
      }
      else 
      { 
          printf("\n\n\t input %d has been deleted", a[front]) ;
          front++;
      }  
  } 
  void display()
   {
     int i;
     if(front > rear)
     {
         printf("\t Nothing to display, Stack is empty");
     }
     else
      {
          for(i =front; i<=rear; i++)
        {
            printf("\n\n\t %d", a[i]);
        }  
      }
   }