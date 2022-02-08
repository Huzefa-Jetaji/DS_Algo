//TO find no. of times an element has occured in an array  with Time Complexity O(log n)
#include <stdio.h>
//This below function is for finding first occurence of the element Using Binary Search
int firstBinarySearch(int arr[], int n, int key)
{
    int left = 0, right = n - 1, mid, result;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (arr[mid] == key) 
        {
            result = mid;
            right = mid - 1;
        }
        else if (key < arr[mid])
            right = mid - 1;

        else
            left = mid + 1;
    }
    return result;
}
//THis below function is for finding last Occurence of the element Using Binary Search
int LastBinarySearch(int arr[], int n, int key)
{
    int left = 0, right = n - 1, mid, result;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (arr[mid] == key)
        {
            result = mid;
            left = mid + 1;
        }
        else if (key < arr[mid])
            right = mid - 1;

        else
            left = mid + 1;
    }
    return result;
}
int main()
{
    int n, key;
    printf("Enter the size of the array.\n");
    scanf("%d", &n);
    int arr[n];
    printf("Give the array.\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Give the element to search no. of occurences.\n");
    scanf("%d", &key);
    printf("No. of occurences using first and last occurence binary search: %d\n", ((LastBinarySearch(arr, n, key) - firstBinarySearch(arr, n, key)) + 1));//Now I am subtracting first occurence from last occurence to find no. of times element has occured and adding +1 to it.
}