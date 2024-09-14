#include<stdio.h>
#include<stdlib.h>
#define size 5
int stack[size];
int top=-1;

void push(int x)
{ 
    if(top==(size-1))
    {
    printf("\nstack is overflow....");
    return;
    }   
    else
    {
    top++;
    stack[top]=x;
    }
}

int pop()
 { 
    if(top==(-1))
    {
    printf("\nstack is empty...");
    exit (1);
    }
    else
    { 
    int x;
    x=stack[top];
    top--;
    return x;
    }
 }

 void peek()
 { 
    if(top==(-1))
    printf("\nstack is empty...");
    else
    { 
    printf("  %d  ",stack[top]);
    }
 }
int isFull()
{
    if(top==size-1)
    return 1;
    else
    return 0;
}
int isEmpty()
{
    if(top==-1)
    return 1;
    else
    return 0;
}

void display()
 {
    int x;
    if(isFull()==1)
    {
    printf("\nstack is overflow....");
    return;   
    }
    else if(isEmpty()==1)
    {
    printf("\nstack is empty...");
    return;    
    }
    else
    for(x=top;x>=0;x--)
    {
    printf("  %d  ",stack[x]);
    }
 }
int main()
{
int choice;
int YES=1;
int value;
while(YES==1)
{
printf("\nPUSH : PRESS 1");
printf("\nPOP: PRESS 2");
printf("\nPEEK : PRESS 3");
printf("\nCHECK STACK IS FULL : PRESS 4");
printf("\nCHECK STACK IS EMPTY : PRESS 5");
printf("\nDISPLAY : PRESS 6");

printf("\n\nEnter Choice : ");
scanf("%d",&choice);
switch(choice) {
   case 1:
   printf("\nEnter Value : ");
   scanf("%d",&value);
   printf("\nPUSH IS.......................\n");
   push(value);
   display(); 
   break;

   case 2:
   printf("\nPOP IS.......................\n");
   value=pop();
   printf(" \nStack elemente is : %d",value);
   printf("\n");
   printf("\nElements In Stack Are : ");
   display();
   break;

   case 3:
   printf("\nPEEK IS.......................\n");
   peek();
   break;

   case 4:
   isFull();
   display();  
   break;

   case 5:
   isEmpty();
   display();
   break;

   case 6:
   printf("\nDISPLAY IS.......................\n");
   display();
   break;
   
   default:
   printf("\nEnter Valid Number ......");
}
printf("\nDO YOU WANT TO CONTINUE : ");
printf("\nIF YES PRESS 1 ,IF NO PRESS 0 : " );
scanf("%d",&YES);
}
return 0;
}