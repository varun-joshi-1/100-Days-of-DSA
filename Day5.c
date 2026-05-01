#include <stdio.h>

int main() {
    
    int m , n ;
    scanf("%d",&m);
    int arr1[m];
    for(int i = 0 ; i < m ; i++){
        scanf("%d",&arr1[i]);
    }

    scanf("%d",&n);
    int arr2[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr2[i]);
    }
    
    int result[m + n];

    int i = 0;  
    int j = 0;  
    int k = 0;  

    
    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            result[k] = arr1[i];
            i++;
        } else {
            result[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < m) {
        result[k] = arr1[i];
        i++;
        k++;
    }

    while (j < n) {
        result[k] = arr2[j];
        j++;
        k++;
    }

    printf("Merged Chronological Log:\n");
    for (int x = 0; x < (m + n); x++) {
        printf("%d ", result[x]);
    }

    return 0;
}