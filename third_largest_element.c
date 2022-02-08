#include <stdio.h>
int third_largest_element(int arr[], int n)
{
    int large = arr[0], second , third;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > large)
        {
            third = second;
            second = large;
            large = arr[i];
        }
        else if (arr[i] > second){
            third=second;
            second = arr[i];
        }

        else if (arr[i] > third)
            third = arr[i];
    }
    printf("second : %d\n",second);
    printf("large : %d\n",large);
    
    

    return third;
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
    printf("Third largest element: %d\n",third_largest_element(arr,n));
}