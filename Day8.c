#include<stdio.h>

int power(int a ,int b){
    int f = 1 ;
    if (b < 1){
        return f ;
    }
    else{
        
        b-- ;
        f = a * power(a,b) ;

    }
}

int main(){
    int m , n , z ;
    scanf("%d%d",&m,&n);
    z = power(m,n);
    printf("%d",z);

    return 0 ;
}