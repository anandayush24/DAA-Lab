//Q1. Write a c program to generate 1000 random numbers.
#include<stdio.h>
int temp=666;
int random(){
    if(temp%3==0){ 
        temp=temp+1;
    }
    else if(temp%3==2){
        temp=temp+3;
    }
    else{
        temp=temp+2;
    }
    return temp%1000;
}
void print(int arr[], int n){
    for(int i=0;i<1000;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[1000];
    for(int i=0;i<1000;i++){
        arr[i] = random();
    }

    print(arr,1000);

    return 0;
}


