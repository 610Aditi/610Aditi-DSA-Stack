#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *top=NULL;
  
struct node *push(int data)
{
struct node *newnode=malloc(sizeof(struct node));
if(newnode==NULL)
{
printf("Memory Allocation Is Failed ...");
exit(1);
}
newnode->data=data;
newnode->next=top;
top=newnode;
}

int pop()
{
    struct node *temp=top;
    int value=temp->data;
    temp=temp->next;
    free(temp);
    temp=NULL;
    top=temp;
    return value;
}
int isEmpty()
{
    if(top==NULL)
    return 1;
    else 
    return 0;
}
int peek()
{
if(top==NULL)
   {
    printf("STACK UNDERFLOW...");
    exit(1);
   }
   return top->data;
}
struct node *display()
{
struct node *temp=top;
printf("\nTHE STACK ELEMENTS ARE :");
if(top==NULL)
   {
    printf("\nSTACK UNDERFLOW...");
    exit(1);
   }
while(temp!=NULL)
{
printf("  %d  ",temp->data);
temp=temp->next;
}
}
int main()
{ 
 int choice,data;
 while(1)
 {
   printf("\nOPERATION PERFORM IN STACK\n");
   printf("1. Push(ADD)\n");
   printf("2. Pop(DELETE)\n");
   printf("3. Print the top most element\n");
   printf("4. Print all the elements of the stack\n"); 
   printf("5. check stack is empty \n if YES then 1 \n if NO then 0\n");
   printf("6. QUIT\n");
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
    printf("Deleted element is %d\n",data);
    break;
    case 3:
    printf("The topmost element of the stack is :%d\n",peek());
    break;
    case 4:
    display();
    break;
    case 5:
    data=isEmpty();
    printf("The stack is YES=1 and NO=0 : %d\n",isEmpty());
    break;
    case 6:
    exit(1);
    default:
    printf("\n\nEnter the valid choice\n");
   }
 } 
return 0;
}