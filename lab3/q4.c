//Q4. Find the sum of a contiguous subarray within a 1 – D array of
//numbers () which has the largest sum.
#include <stdio.h>
int main(){
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    int arr[n];
    printf("enter elements of array: ");
    for (int i = 0; i < n; i++){ 
        scanf("%d", &arr[i]); 
    }

    int currSum=0, maxSum=-9999;
    for(int i=0;i<n;i++){
        currSum = currSum + arr[i];
        if(currSum<0){
            currSum=0;
        }
        if(currSum > maxSum){
            maxSum = currSum;
        }
    }

    printf("max contagious sum: %d", maxSum);
    return 0;
}