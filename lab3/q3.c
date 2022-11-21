//Q3. Find the sum of a contiguous subarray within a 1 – D 
//array of positive numbers which has the largest sum.
#include<stdio.h>
int main(){
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    int arr[n];
    printf("enter elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    int prefixSum[n];
    prefixSum[0]=arr[0];
    for(int i=1;i<n;i++){
        prefixSum[i] = prefixSum[i-1] + arr[i];
    }

    printf("max sum: %d", prefixSum[n-1]);
    return 0;
}