#include <stdio.h>
void set_reversing(int arr[], int n, int k)
{
    // In this program we are making left and right positions.
    for (int i = 0; i < n; i += k) // we are doing i=i+k for iterating for the gap
    {
        int left = i, right, temp;
        if ((i + k - 1) < n)
        {
            right = i + k - 1;
        }
        else
            right = n - 1;

        while (left < right)
        {
            temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
}
void InputArray(int arr[], int n)
{
    printf("Give array .\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%-5d", arr[i]);
    printf("\n");
}
int main()
{
    int n, k;
    printf("Enter the size of the array.\n");
    scanf("%d", &n);
    int arr[n];
    InputArray(arr, n);
    printf("Give the subarray size to divide.\n");
    scanf("%d", &k);
    set_reversing(arr, n, k);
    printArray(arr, n);
}