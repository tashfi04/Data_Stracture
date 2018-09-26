#include <bits/stdc++.h>

using namespace std;

void bubble_sort(int arr[], int *size_)
{
    int i, j, temp;

    for(i=0; i<(*size_)-1; i++)
    {
        for(j=i+1; j<(*size_); j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

int main()
{
    int size_;
    printf("Enter the size of the array:\n");
    scanf("%d",&size_);

    int arr[size_], i;
    printf("Enter the elements of the array:\n");

    for(i=0; i<size_; i++)
        scanf("%d",&arr[i]);

    bubble_sort(arr, &size_);

    for(i=0; i<size_; i++)
        printf("%d ",arr[i]);

    return 0;
}
