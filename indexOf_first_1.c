#include<stdio.h>
int firstBinarySearch(int arr[],int n,int value){
    int left=0,right=n-1,result;
    while (left<=right)
    {
        int mid=(left+right)/2;
        if(arr[mid]==1){
            right = mid-1;
            result=mid;
        }
        else if(arr[mid]<1){
            left=mid+1;
        }
        else right=mid-1;
    }
    return result;
}

void InputArray(int arr[],int n){
    printf("Give sorted array 0s and 1s.\n");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    return ;
}
int main(){
    int n;
    printf("Give the dimension of the array.\n");
    scanf("%d",&n);
    int arr[n];
    InputArray(arr,n);
    printf("Index of First 1 : %d\n",firstBinarySearch(arr,n,1));
    return 0;
}