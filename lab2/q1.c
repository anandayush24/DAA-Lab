//Q1. Write a program to compare the time of execution of linear search and binary search.
#include<stdio.h> 
#include<time.h>

void linearSearch(int arr[], int n, int target){
    double time_lin;
    clock_t start, end;
    start = clock();

    int found=0;
    for(int i=0;i<n;i++){
        if(arr[n]==target){
            found=1;
            break;
        }
    }
    end = clock();
    time_lin = ((double)(end-start))/CLOCKS_PER_SEC;
    printf("linear search\n");
    if (found==1){ printf("found\n"); }
    else{ printf("not found\n"); }

    printf("start time: %lf\nend time: %lf\nexecution time: %lf\n\n\n\n", start, end, time_lin);
}

void binarySearch(int arr[], int n, int target){
    double time_bin;
    clock_t start, end;
    start = clock();
    
    int low=0, high=n-1;
    int mid = (high+low)/2;
    int found = 0;

    while(high>=low){
        if(arr[mid]==target){
            found=1;
            break; }
        else if(arr[mid]>target){ high = mid-1; }
        else{ low = mid+1; }
        mid = (high+low)/2;
    }
    end = clock();
    time_bin = ((double)(end - start))/CLOCKS_PER_SEC;
    printf("linear search\n");
    if(found==1){ printf("found\n"); }
    else{ printf("not found\n"); }

    printf("start time: %lf\nend time: %lf\nexecution time: %lf\n\n\n\n", start, end, time_bin);
}

int main(){
    int n=10;
    int arr[10] = {3, 5, 6, 9, 12, 13, 34, 56, 78, 90};
    int target = 34;

    binarySearch(arr, n, target);
    linearSearch(arr, n, target);

    return 0;
}