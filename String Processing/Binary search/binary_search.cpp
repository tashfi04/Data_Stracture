#include <bits/stdc++.h>

using namespace std;

void binarysearch(int arr[], int (*size_), int (*num))
{
    int B=0, E=(*size_-1), M=(B+E)/2;
    bool found=false;

    while(B<=E)
    {
        if((*num)==arr[M])
        {
            found=true;
            printf("%d found at index %d\n", (*num), M);
            break;
        }
        else if((*num)>arr[M])
        {
            B=M+1;
        }
        else
        {
            E=M-1;
        }
        M=(B+E)/2;
    }
    if(!found)
        printf("%d not found!\n", (*num));

}

int main()
{
    int size_;

    printf("Enter the size of the array:\n");
    scanf("%d", &size_);

    int arr[size_], i, num;
    printf("Enter elements of the array in ascending order:\n");

    for(i=0; i<size_; i++)
        scanf("%d", &arr[i]);

    printf("Enter the number you want to search:\n");
    scanf("%d", &num);

    binarysearch(arr, &size_, &num);

    return 0;
}
