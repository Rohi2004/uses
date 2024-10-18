#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int stack[MAX], ele, num, top = -1;
void push(int);
int pop();
void stackstatus();
void display();
int main()
{
    int ch;
    while (1)
    {
        printf("\n1.Push \n2.pop\n3.stack status\n4.display\n5.Exit\nEnter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter element to push");
            scanf("%d", &ele);
            push(ele);
            break;

        case 2:
            ele = pop();
            printf("\n popped element from stack %d", ele);
            break;

        case 3:
            stackstatus();
            break;

        case 4:
            display();
            break;

        case 5:
            exit(0);
        }
    }
}

void push(int ele)
{
    if (top == MAX - 1)
    {
        printf("\nstack is overflow");
    }
    else
    {
        stack[++top] = ele;
    }
}

int pop()
{
    if (top == -1)
    {
        printf("\n stack is underflow");
    }
    else
    {
        return stack[top--];
    }
}

void stackstatus()
{
    if (top==MAX-1)
    {
        printf("\nstack if full");
    }
    display();

}

void display()
{
    int i;
    if(top==-1)
    {
        printf("\nstack is empty");

    }
    else{
        int i;
        printf("\nstack elements are");
        for(i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}