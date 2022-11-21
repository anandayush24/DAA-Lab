//Q2. Write a program to add n number of Matrices, n will be user input n >= 3.
#include <stdio.h>
int main(){
    int row, col, c, d, temp;
    int mat1[10][10], mat2[10][10], res[10][10];

    printf("Enter the number of marix : ");
    scanf("%d", &temp);

    printf("Enter the number of rows and columns of matrix\n");
    scanf("%d%d", &row, &col);
    
    //enter elements of mat1 matrix
    printf("Enter the elements of mat1 matrix\n");
    for (c = 0; c < row; c++){
        for (d = 0; d < col; d++){
            scanf("%d", &mat1[c][d]);
        }
    }

    printf("Enter the elements of mat2 matrix\n");
    for (c = 0; c < row; c++){
        for (d = 0; d < col; d++){
            scanf("%d", &mat2[c][d]);
        }
    }
    int i = 3;

    for (c = 0; c < row; c++){
        for (d = 0; d < col; d++){
            res[c][d] = mat1[c][d] + mat2[c][d];
        }
    }

    temp =temp + 2;
    while (temp--){
        printf("Enter the %d matrix: \n", i);
        i++;
        for (c = 0; c < row; c++){
            for (d = 0; d < col; d++){
                scanf("%d", &mat1[c][d]);
                res[c][d] += mat1[c][d];
            }
        }
    }
    for (c = 0; c < row; c++){
        for (d = 0; d < col; d++){
            printf("%d  ", res[c][d]);
        }
        printf("\n");
    }

    return 0;
}