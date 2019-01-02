#include <bits/stdc++.h>

using namespace std;

void merge_(int arr[], int left, int mid, int right)
{
    int i, j, k;
    int left_sub_arr_size = mid-left+1;
    int right_sub_arr_size = right-mid;
    int left_sub_arr[left_sub_arr_size];
    int right_sub_arr[right_sub_arr_size];

    for(i=0; i<left_sub_arr_size; i++)
        left_sub_arr[i] = arr[left+i];
    for(j=0; j<right_sub_arr_size; j++)
        right_sub_arr[j] = arr[mid+1+j];

    i = 0;
    j = 0;
    k = left;

    while(i<left_sub_arr_size && j<right_sub_arr_size)
    {
        if(left_sub_arr[i]<=right_sub_arr[j])
        {
            arr[k] = left_sub_arr[i];
            i++;
        }
        else
        {
            arr[k] = right_sub_arr[j];
            j++;
        }
        k++;
    }

    while(i<left_sub_arr_size)
    {
        arr[k] = left_sub_arr[i];
        i++;
        k++;
    }
    while(j<right_sub_arr_size)
    {
        arr[k] = right_sub_arr[j];
        j++;
        k++;
    }
}

void merge_sort(int arr[], int left, int right)
{
    int mid;
    if(left<right)
    {
        mid = (left+right)/2;
        merge_sort(arr, left, mid);
        merge_sort(arr, mid+1, right);

        merge_(arr, left, mid, right);
    }
}

void print_array(int arr[], int n)
{
    int i;
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int n, i, j;

    printf("Enter the number of inputs:\n");
    scanf("%d", &n);

    int arr[n+5];

    printf("Enter the inputs:\n");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    merge_sort(arr, 0, n-1);

    printf("\nSorted array is:\n");
    print_array(arr, n);

    return 0;
}
