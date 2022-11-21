//Q2. Write a c program for bubble sort
#include <stdio.h>
int temp = 666;
int random(){
    if (temp % 3 == 0){ temp = temp + 1; }
    else if (temp % 3 == 2){ temp = temp + 3; }
    else{ temp = temp + 2; }

    return temp % 100;
}

void print(int arr[], int n, int swaps){
    for (int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("no. of swaps: %d", swaps);
    printf("\n");
}

void bubbleSort(int arr[], int n){
    int swaps=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swaps++;
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    print(arr, n, swaps);
    printf("\n");
}

int main(){
    // int arr[1000];
    // for (int i = 0; i < 1000; i++){
    //     arr[i] = random();
    // }
    //for random input
    int arr[] = {2,4,5,1,3};
    bubbleSort(arr,5);
    printf("\n");

    //for ascending input
    int ascending[] = {1, 2, 3, 4, 5};
    bubbleSort(ascending, 5);
    printf("\n");

    //for descending input
    int descending[] = {9, 8, 7, 6, 5};
    bubbleSort(descending, 5);
    printf("\n");

    return 0;
}
