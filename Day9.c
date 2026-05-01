//A secret system stores code names in forward order. 
//To display them in mirror format, you must transform the given code name so that its characters appear in the opposite order.

#include<stdio.h>
#include<string.h>
int main(){
    char str[100] , temp ;
    fgets(str , 99 , stdin );
    int b = strlen(str) ;
    
    str[strcspn(str,"\n")] = '\0';

    for(int i = 0 ; i < b/2  ; i++){
        temp  = str[i] ;
        str[i] = str [b - i - 1];
        str[b - i - 1] = temp ;
    }

    for(int i = 0 ; i < b ; i++){
        printf("%c",str[i]);
    }
    
    return 0 ;
}