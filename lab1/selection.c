//Q3. Write a c program for selection sort.
#include<stdio.h>
int temp = 666;
int random(){
    if (temp % 3 == 0){ temp = temp + 1; }
    else if (temp % 3 == 2){ temp = temp + 3; }
    else{ temp = temp + 2; }

    return temp % 100;
}

void print(int arr[], int n){
    for (int i = 0; i < 1000; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void selectionSort(int arr[], int n){
    for (int i=0;i<n-1;i++){
        int temp=i;
        for (int j=i+1; j<n; j++){
            if (arr[j] < arr[temp]){ 
                temp = j; 
            }
        }
        int res=arr[temp];
        arr[temp]=arr[i];
        arr[i]=res;
    }

    print(arr,n);
}

int main(){
    int arr[1000];
    for (int i = 0; i < 1000; i++){
        arr[i] = random();
    }
    //for random input
    selectionSort(arr, 1000);

    //for ascending input
    int ascending[]={1,2,3,4,5};
    selectionSort(ascending, 5);

    //for descending input
    int descending[] = {9, 8, 7, 6, 5};
    selectionSort(descending, 5);

    return 0;
}