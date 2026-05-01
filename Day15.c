//Given a matrix, calculate the sum of its primary diagonal elements. 
//The primary diagonal consists of elements where row index equals column index.

#include<stdio.h>
int main(){
    int row , col , sum = 0 ;
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
            if( i == j ){
                sum = sum + mat[i][j];
            }
        }
    }

    printf("%d",sum);

    return 0 ;
}