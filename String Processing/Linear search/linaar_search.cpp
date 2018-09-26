#include <bits/stdc++.h>

using namespace std;

void linear_search(int arr[], int (*size_), int (*num))
{
    int i;

    for(i=0; i<(*size_); i++)
    {
        if(arr[i]==(*num))
        {
            printf("%d found at index %d\n", (*num), i);
            break;
        }
    }
    if(i==(*size_))
        printf("%d not found!\n", (*num));
}

int main()
{
    int size_;
    printf("Enter the size of the array:\n");
    scanf("%d", &size_);

    int arr[size_], i, num;

    printf("Enter the elements of the array:\n");
    for(i=0; i<size_; i++)
        scanf("%d", &arr[i]);

    printf("Enter the element you want to search:\n");
    scanf("%d", &num);

    linear_search(arr, &size_, &num);

    return 0;
}
