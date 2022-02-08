#include<stdio.h>
void binaryArraySort_NareshI_Method(int arr[],int n){
    int left=0,right=n-1;
    while (left<right)
    {
        while(arr[left]==0 && left<right)
            left++;
        while(arr[right]==1 && left<right)
            right--;
        

        if(left<right){
            arr[left]=0;
            arr[right]=1;
            left++;
            right--;
        }
    }
    return;
}

void printArray(int arr[],int n){
    for( int i=0;i<n;i++)
        printf("%-4d",arr[i]);
    printf("\n");
}

void inPutArray(int n,int arr[]){
    printf("Give the array in 0s and 1s only.\n");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    return;
}


int main()
{
    int n;
    printf("Enter the dimension of the array.\n");
    scanf("%d",&n);
    int arr[n];
    inPutArray(n,arr);
    binaryArraySort_NareshI_Method(arr,n);
    printArray(arr,n);
}