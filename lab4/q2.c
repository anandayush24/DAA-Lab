#include<stdio.h>
int n=3;
//function to get the cofactors
void getCofactor(int A[n][n], int temp[n][n], int p, int q, int n){
    int i = 0, j = 0;
    for (int row = 0; row < n; row++){
        for (int col = 0; col < n; col++){
            if (row != p && col != q){
                temp[i][j++] = A[row][col];
                if (j == n - 1){
                    j=0;
                    i++;
                }
            }
        }
    }
}

//function to get the determinants
int determinant(int A[n][n], int n){
    int D = 0;
    if (n == 1){ return A[0][0]; }
    int temp[n][n];
    int sign = 1;
    for (int f = 0; f < n; f++){
        getCofactor(A, temp, 0, f, n);
        D += sign * A[0][f] * determinant(temp, n - 1);
        sign = -sign;
    }

    return D;
}

//function to find adjoint
void adjoint(int A[n][n], int adj[n][n]){
    if (n == 1){
        adj[0][0] = 1;
        return;
    }
    int sign = 1, temp[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            getCofactor(A, temp, i, j, n);
            sign = ((i + j) % 2 == 0) ? 1 : -1;
            adj[j][i] = (sign) * (determinant(temp, n - 1));
        }
    }
}

void display(int mat[n][n]){
    //displaying the matrix
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int mat[3][3];
    //taking input of the matrix
    printf("enter elements of matrix: ");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &mat[i][j]);
        }
    }
  

    int adj[n][n];

    float inv[n][n];
    printf("Input matrix is :\n");
    display(mat);

    printf("\nThe Adjoint is :\n");
    adjoint(mat, adj);
    display(adj);

    return 0;
}