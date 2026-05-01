//Write a program to perform addition of two matrices having the same dimensions. 
//The sum of two matrices is obtained by adding corresponding elements of the matrices.

#include<stdio.h>
int main(){
    int m , n ;
    scanf("%d %d",&m,&n);

    int mat1[m][n] , mat2[m][n] , mat[m][n] ;
    
    for (int i = 0 ; i < m ; i ++){
        for(int j = 0 ; j < n ; j++){
            scanf("%d",&mat1[i][j]);
        }
    }

    for (int i = 0 ; i < m ; i ++){
        for(int j = 0 ; j < n ; j++){
            scanf("%d",&mat2[i][j]);
        }
    }

    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++ ){
            mat[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    for (int i = 0 ; i < m ; i ++){
        for(int j = 0 ; j < n ; j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }

    return 0 ;
}