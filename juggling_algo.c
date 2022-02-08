#include <stdio.h>
int gcd(int d, int n)
{
    if (n == 0)
        return d;
    else
        return gcd(n, d % n);
}
void AntiRotate(int arr[], int d, int n)
{
    d = d % n;             //To handle d>=n
    int g_c_d = gcd(d, n); // For finding sets

    for (int i = 0; i < g_c_d; i++)
    {
        int temp = arr[i];
        int j = i;

        while (1)
        {
            int k = j + d;
            if (k >= n)
                k = k - n;

            if (k == i)
                break;
            
            arr[j]=arr[k];
            j=k;
        }
        arr[j]=temp;
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
    int n,d;
    printf("Enter the size of array.\n");
    scanf("%d",&n);
    
    int arr[n];

    printf("Give the array.\n");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("No. of times you want to juggle array.\n");
    scanf("%d",&d);

    AntiRotate(arr,d,n);
    printArray(arr,n);
    return 0;
}