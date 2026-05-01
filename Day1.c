/*
Write a C program to insert an element x at a given 1-based position pos in an array of n integers.
Shift existing elements to the right to make space.
*/

#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int z, l;
    
    scanf("%d", &l);
    l--;
    scanf("%d", &z);

    for (int i = n; i >= 0; i--)
    {
        if (i >= l)
        {
            arr[i + 1] = arr[i];
        }
    }

    arr[l] = z;

    for (int i = 0; i < n + 1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}