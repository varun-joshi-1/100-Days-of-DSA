/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target
*/

#include<stdio.h>
int main(){

    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int z , in ;
    scanf("%d", &z);

    for(int i = 0 ; i < n ; i++){
        for(int j = i ; j < n ; j ++){
            if(i != j){
                if(arr[i] + arr[j] == z){
                    printf("[%d,%d] ", i , j);
                }
            }
        }
    }

    return 0 ;
}