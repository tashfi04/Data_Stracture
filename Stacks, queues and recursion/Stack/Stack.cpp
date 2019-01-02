#include <bits/stdc++.h>

using namespace std;

int top = -1, bot = -1;

int stack_[10000];

void push(int n)
{
    if(bot == -1)
    {
        top++;
        bot++;
        stack_[bot] = n;
    }
    else
    {
        top++;
        stack_[top] = n;
    }
}
void pop()
{
    if(top == bot)
    {
        top = bot = -1;
    }
    else
    {
        top--;
    }
}

int main()
{
    int select, n;

    while(1)
    {
        printf("Select one of the below:\n1. Insert a new element at the top of the stack.\n2. Delete the top element of the stack.\n3. View the elements inside the stack.\n4. Exit.\n");
        scanf("%d", &select);

        if(select == 1)
        {
            printf("Enter the element:\n");
            scanf("%d", &n);
            push(n);
        }
        else if(select == 2)
        {
            pop();
        }
        else if(select == 3)
        {
            if(top == -1 && bot == -1)
                printf("The stack is empty\n");
            else
            {
                printf("The elements of the stack are:\n");
                for(int i=top; i>=bot; i--)
                    printf("%d\n", stack_[i]);
            }
        }
        else if(select == 4)
        {
            return 0;
        }
        else
            printf("Wrong input\n");
    }

    return 0;
}
