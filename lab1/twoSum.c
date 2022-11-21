//Q4. Write a c program for maximum sum of two numbers in an array.
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
    //int maxi=0, temp1=arr[0], temp2=arr[1];
    // for (int i=0; i<n; i++){
    //     for(int j=i+1; j<n;j++){
    //         int res = (arr[i] + arr[j]);
    //         if (res > maxi){
    //             maxi=res;
    //             temp1=arr[i];
    //             temp2=arr[j];
    //         }
    //     }
    // }
    int temp1=arr[0];
    for(int i=0;i<n;i++){
        if(temp1<arr[i]){
            temp1=arr[i];
        }
    }

    int temp2 = arr[0];
    for (int i = 0; i < n; i++){
        if (temp2<arr[i] && arr[i] != temp1){
            temp2 = arr[i];
        }
    }
    int maxi = temp1 + temp2;
    printf("sum: %d\nfirst: %d second: %d",maxi, temp1, temp2);
    return 0;
}