//Write a program to check whether a given matrix is symmetric. 
//A matrix is said to be symmetric if it is a square matrix and is equal to its transpose 
//(i.e., element at position [i][j] is equal to element at position [j][i] for all valid i and j).

#include <stdio.h>
int main(){
    int m , n ;
    scanf("%d %d",&m,&n);

    int mat1[m][n] , flag = 0 ;

    for (int i = 0 ; i < m ; i ++){
        for(int j = 0 ; j < n ; j++){
            scanf("%d",&mat1[i][j]);
        }
    }

    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            if (mat1[i][j] == mat1[j][i]){
                continue;
            }
            else{
                flag = 1 ;
            }
        }
    }

    if(flag){
        printf("Non Symmetric Matrix");
    }
    else{
        printf("Symmetric Matrix");
    }

    return 0 ;
}