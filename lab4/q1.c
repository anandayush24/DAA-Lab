#include<stdio.h>
int mini = 0, maxi = 0;
void solution(int low, int high, int arr[]){
    int tempMax=0, tempMin=0, mid=0;
    if(low==high){
        maxi = arr[high];
        mini = arr[high];
    }
    else if(low = high-1){
        if(arr[low]>arr[high]){
            maxi=arr[low];
            mini=arr[high];
        } 
        else {
            maxi=arr[high];
            mini=arr[low];
        }
    }
    else{
        mid=(high+low)/2;

        solution(low, mid, arr);
        tempMax=maxi;
        tempMin=mini;
        solution(mid+1, high, arr);

        if(maxi<tempMax){
            maxi=tempMax;
        }
        if(mini>tempMin){
            mini=tempMin;
        }
    }
}
int main(){
    int n;
    printf("enter number of terms: ");
    scanf("%d", &n);

    int arr[n];
    printf("enter elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    solution(0, n-1, arr);

    printf("Maximum: %d\nMinimum: %d", maxi, mini);
    return 0;
}