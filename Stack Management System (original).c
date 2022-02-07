#include<stdio.h>
#include<stdlib.h>
 
#define MAX 5 //Maximum number of elements that can be stored
 
int top=-1,stack[MAX];
void push();
void pop();
void display();
 
void main()
{
    int ch;
    while(1) //infinite loop, will end when choice will be 4
    {
        printf("\n\n1.Push Number in stack.\n2.Display all number from stack. \n3.Pop number from in stack\n4.Exit");
        printf("\n\nSelect Menu choice:");
        scanf("%d",&ch);
        
        switch(ch)
        {
            case 1: push();
            break;
    
            case 2: display();
            break;
        
            case 3: pop();
            break;

            case 4: exit(0);
            default: printf("\nWrong Choice!!");
        }
    }
}
 
void push()
{
    int val;
    if(top==MAX-1)
    {
        printf("\nStack is full!!");
    }
    else
    {
        printf("\nEnter number in stack:");
        scanf("%d",&val);
        top=top+1;
        stack[top]=val;
    }
}
 
void pop()
{
    if(top==-1)
    {
        printf("\nStack is empty!!");
    }
    else
    {
        printf("\nDeleted element is %d",stack[top]);
        top=top-1;
    }
}
 
void display()
{
    int i;
    if(top==-1)
    {
        printf("\nStack is empty!!");
    }
    else
    {
        printf("\nStack is...\n");
        for(i=top;i>=0;--i)
        printf("%d\n",stack[i]);
    }
}
