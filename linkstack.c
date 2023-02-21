#include<stdio.h>
#include<stdlib.h>
 struct node
 {
     int data;
     struct node*next;
 }*top=NULL,*temp;
  void push (int value)
 {
     struct node*newnode=malloc(sizeof(struct node));
     newnode->data=value;
     if(top==NULL)
     {
         top=newnode;
         newnode->next=NULL;
     }
     else
     {
         newnode->next=top;
         top=newnode;
     }
     printf("---> %d has been pushed",value );
 }
 void pop()
 {
     if(top==NULL)
        {
            printf("Stack is Empty \n");
        }
     else
        {
            temp=top;
            top=top->next;
            free(temp);
            printf("\n One Item is popped");
        }

 }
void display()
{
    if(top==NULL)
    {
        printf("\n Linked stack is empty \n");
    }
    else
    {
        printf("\n Elements Present in Stack");
        temp=top;
        while(temp->next!= NULL)
        {
            printf("\n\t%d",temp->data);
            temp = temp -> next;
        }
        printf("\n\t %d \n",temp -> data);
    }
}
 void main()
 {
     int ch,c,value;
     printf("\n Linked stack \n");
     do
     {
         printf("\nOperations in Linked stack :\n 1.Push\t\t 2.Pop\n 3.Display\t 4.Exit \n select your operation :\n");
         scanf("%d",&ch);
        switch (ch)
            {
                case 1:
                    printf("\n Enter the value to Insert :");
                    scanf("%d",&value);
                    push(value);
                    break;
                case 2:
                    pop();
                    break;
                case 3:
                    display();
                    break;
            }
     }while(ch!=4);
 }






