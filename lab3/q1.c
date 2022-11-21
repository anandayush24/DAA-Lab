//Q1. Find the GCD and LCM of n numbers where (n>=2).
#include <stdio.h>
int gcd(int a, int b){
    int temp;
    for (int i = 1; i <= a && i <= b; ++i){
        if (a % i == 0 && b % i == 0){ 
            temp = i;
        }
    }
    return temp;
}

int lcm(int a, int b){
    int temp = (a * b) / gcd(a, b);
    return temp;
}

int main(){
    int n;
    printf("Enter the number of numbers: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the numbers: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    int l=0, g=0;
    int lcmArr[n], gcdArr[n];
    for (int i = 0; i < n; i++){
        lcmArr[i] = a[i];
        gcdArr[i] = a[i];
    }
    for (int i = 0; i < n - 1; i++){
        l = lcm(lcmArr[i], lcmArr[i+1]);
        lcmArr[i+1]=l;
        g = gcd(a[i], a[i + 1]);
        gcdArr[i+1]=g;
    }

    printf("LCM: %d\nGCD: %d", l, g);
    return 0;
}