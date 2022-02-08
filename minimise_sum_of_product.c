#include <stdio.h>
void InputArray(int *arr, int n, int ind)
{
    printf("Give %d array .\n", ind);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
}
void SwapFunction(int min, int j, int arr[])
{
    int temp;
    temp = arr[min];
    arr[min] = arr[j];
    arr[j] = temp;
    return;
}
void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d\t", arr[i]);
}

void selection_sort(int *arr, int n)
{
    int j;
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        if (min != i)
            SwapFunction(min, i, arr);
    }
}

int minimum_sum_of_product(int arr[], int arr2[], int n)
{
    int sum = 0,j=n-1;
    
    for (int i = 0; i < n; i++)
    {
        sum+=(arr[i]*arr2[j]);
        j--;
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter the size of the array.\n");
    scanf("%d", &n);
    int arr[n], arr2[n];
    InputArray(arr, n, 1);
    InputArray(arr2, n, 2);
    selection_sort(arr, n);
    printArray(arr, n);
    printf("\n");
    selection_sort(arr2, n);
    printArray(arr2, n);
    printf("\n");
    printf("Minimum sum of the Product : %d\n\n",minimum_sum_of_product(arr,arr2,n));
}