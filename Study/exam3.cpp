#include<stdio.h>
#define size 3
int stack[size];
int top = -1;
void push(int x)
{
     if (top < size-1)
     {
         top = top + 1;
         stack[top]=x;
         printf("Sucessfully added item:%d\n",x);
     }
     else
     {
        printf("No Spaces\n");
     }
    }
        int pop()
    {
         if(top>=0)
         {
         int var=stack[top];
         top=top-1;
         return var;
     }
     printf("Empty stack");
     return -1;
    }
    int peek()
    {
     if(top>=0)
     {
     return stack[top];
     }
     printf("Empty stack\n");
     return -1;
    }
int main()
    {
     printf("Implementation my stack in C\n");
     peek();
     push(10);
     push(20);
     push(30);
     printf("Pop item:%d\n",pop());
     push(40);
     printf("Top of Stack :%d\n",peek());
     return 0;
}
