//Read a string and check if it is a palindrome using two-pointer comparison.

#include<stdio.h>
#include<string.h>
int main(){
    char str[100] , temp ;
    scanf("%[^\n]",&str);
    char str2[100] ;

    
    str[strcspn(str,"\n")] = '\0';
    int b = strlen(str) ;
    strcpy(str2,str);

    for(int i = 0 ; i < b/2  ; i++){
        temp  = str[i] ;
        str[i] = str [b - i - 1];
        str[b - i - 1] = temp ;
    }

    if ( strcmp(str,str2) == 0 ){
        printf("Its a Palindrome");
    }
    else{
        printf("Not a Palindrome");
    }
    
    return 0 ;
}