#include <stdio.h>

void swap(int arr[], int min, int i)
{
    int temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
    return;
}
void SelectionSort(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        int min = i, j;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
                min = j;
        }
        if (min != i)
        {
            swap(arr, min, i);
        }
    }
    
    return;
}
void triplets_of_sum(int arr[], int n)
{
    SelectionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        int left = i + 1, right = n - 1;
        while (left < right)
        {
            if (arr[i] + arr[left] + arr[right] == 0)
            {
                printf("%d %d %d\n", arr[i], arr[left], arr[right]);
                left++;
                right--;
            }
            else if (arr[i] + arr[left] + arr[right] < 0)
            {
                left++;
            }
            else
                right--;
        }
    }
}
int main()
{
    int n;
    printf("Enter the size of the array.\n");
    scanf("%d", &n);
    int arr[n];
    printf("Give the array.\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    triplets_of_sum(arr, n);
}