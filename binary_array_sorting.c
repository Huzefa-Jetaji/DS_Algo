//Array is filled with binary numbers in unsorted manner
//Let's solve with Quick Sort Algo
#include <stdio.h>
//You have to do sorting in one traversal - Trickey by INterviewer

void binaryArraySorting(int arr[],int n){
    int i=-1,j,pivot=0,temp;
    for (j=0;j<n;j++)
    {
        if(arr[j]<=pivot){
            i++;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    } 
    return;
}
void printArray(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    
}
int main()
{

    int n;
    printf("Enter the size of the array.\n");
    scanf("%d", &n);
    int arr[n];
    printf("Give the array in 1s and 0s only.\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    binaryArraySorting(arr,n);
    printArray(arr,n);
}