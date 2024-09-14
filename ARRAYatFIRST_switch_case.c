#include<stdio.h>
#include<stdlib.h>
#define size 5
int stack_array[size];
int first=-1;

void push(int data)
{
    int i;
    first+=1;
    for(i=first;i>0;i--)
    {
    stack_array[i]=stack_array[i-1];
    }
    stack_array[0]=data;
}
int peek()
{
    if(isEmpty())
    {
    printf("Stack is Empty\n ");
    exit(1);
    }
    return stack_array[0];
    
}

int pop()
{
    int i,value;
    value=stack_array[0];
    for(i=0;i<first;i++)
    {
    stack_array[i]=stack_array[i+1];
    }
    first-=1;
    return value;
}
int isEmpty()
{
    if(first==-1)
    return 1;
    else 
    return 0;
}
int isFull()
{
    if(first==size-1)
    return 1;
    else 
    return 0;
}
 void display()
 {
    int i;
    if(first==-1)
    {
    printf("\nstack is underflow / empty");
    return;   
    }
    else
    for(i=0;i<=first;i++)
    {
    printf("\n%d",stack_array[i]);
    }
 }
int main()
{ 
 int choice,data;
 while(1)
 {
   printf("\n");
   printf("\nOPERATION PERFORM IN STACK\n");
   printf("1. Push(ADD)\n");
   printf("2. Pop(DELETE)\n");
   printf("3. Print the element\n");
   printf("4. Print all the elements of the stack\n"); 
   printf("5. check stack is full \n if YES then 1 \n if NO then 0\n");
   printf("6. check stack is empty \n if YES then 1 \n if NO then 0\n");
   printf("7. QUIT\n");
   printf("\n PLEASE ENTER THE CHOICE : ");
   scanf("%d",&choice);  
   switch(choice)
   {
    case 1:
    printf("Enter the element to bt pushed :" );
    scanf("%d",&data);
    push(data);
    break;
    case 2: 
    data=pop();
    printf("Deleted element id %d\n",data);
    break;
    case 3:
    printf("The topmost element of the stack is :%d\n",peek());
    break;
    case 4:
    display();
    break;
    case 5:
    data=isFull();
    printf("The stack is YES=1 and NO=0 : %d\n",isFull());
    break;
    case 6:
    data=isEmpty();
    printf("The stack is YES=1 and NO=0 : %d\n",isEmpty());
    break;
    case 7:
    exit(1);
    default:
    printf("\n\nEnter the valid choice\n");
   }
 } 
return 0;
}