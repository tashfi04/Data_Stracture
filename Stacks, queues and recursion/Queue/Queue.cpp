#include <bits/stdc++.h>

using namespace std;

int front_ = -1, rear = -1;

int queue_[10000];

void enqueue(int n)
{
    if(front_ == -1)
    {
        front_++;
        rear++;
        queue_[front_] = n;
    }
    else
    {
        rear++;
        queue_[rear] = n;
    }
}
void dequeue()
{
    if(front_ == rear)
    {
        front_ = rear = -1;
    }
    else
    {
        front_++;
    }
}

int main()
{
    int select, n;

    while(1)
    {
        printf("Select one of the below:\n1. Insert a new element at the end of the queue.\n2. Delete the front element of the queue.\n3. View the elements of the queue.\n4. Exit.\n");
        scanf("%d", &select);

        if(select == 1)
        {
            printf("Enter the element:\n");
            scanf("%d", &n);
            enqueue(n);
        }
        else if(select == 2)
        {
            dequeue();
        }
        else if(select == 3)
        {
            if(front_ == -1 && rear == -1)
                printf("The queue is empty\n");
            else
            {
                printf("The elements of the queue are:\n");
                for(int i=front_; i<=rear; i++)
                    printf("%d   ", queue_[i]);
                printf("\n");
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

