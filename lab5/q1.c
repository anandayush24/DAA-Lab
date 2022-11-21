#include<stdio.h>
void merge(int arr[], int left, int mid, int right){
    int i,j,k;
    int n1=mid-left+1;
    int n2=right-mid;

    int L[n1], R[n2];
    for(i=0;i<n1;i++){
        L[i]=arr[left+i];
    }
    for(j=0;j<n2;j++){
        R[j]=arr[mid+1+j];
    }

    i=0; j=0; k=0;

    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }
}

void mergeSort(int arr[], int left, int right){
    int mid=0;

    while(left<right){
        mid=(left+right)/2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);

        merge(arr, left, mid, right);
    }
}

void display(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int n;
    printf("enter no. of terms: ");
    scanf("%d", &n);

    int arr[n];
    printf("enter elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    display(arr,n);
    mergeSort(arr,0,n-1);
    display(arr,n);

    return 0;
}