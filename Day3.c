#include<stdio.h>
int main(){
    int n ;
        scanf("%d",&n);

        int arr[n];

        for (int i = 0 ; i < n ; i++){
            scanf("%d",&arr[i]);
        }

        int z , result = 0 , index ;
        scanf("%d",&z);

        for (int i = 0 ; i < n ; i++){
            if (arr[i] == z){
                result = 1 ;
                index = i ;
                break ;
            }
        }
        if (result){
            printf("Found at index %d" , index ) ;
            printf("\nComparisons = %d" , index + 1);
        }
        else{
            printf("Not Found") ;
        }

        return 0 ;
}