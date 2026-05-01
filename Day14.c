//Write a program to check whether a given square matrix is an Identity Matrix. 
//An identity matrix is a square matrix in which all diagonal elements are 1 and all non-diagonal elements are 0.

#include<stdio.h>
int main(){
    int row , col , flag = 1 ;
    printf("No. of Rows: ");
    scanf("%d",&row);
    printf("No. of Columns: ");
    scanf("%d",&col);

    int mat[row][col];

    printf("Enter the Elements: ");
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            scanf("%d",&mat[i][j]);
        }
    }

    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            if (i != j ){
                if ( mat[i][j] == 0 ){
                    continue ;
                } 
                else{
                    flag = 0 ;
                }
            }
            else if (i == j ){
                if ( mat[i][j] == 1 ){
                    continue ;
                } 
                else{
                    flag = 0 ;
                }
            }
        }
    }

    if(flag){
        printf("Identity Matrix");
    }
    else{
        printf("Not an Identity Matrix");
    }


    return 0 ;
}