#include<stdio.h>
#define max(a, b) (a>b)? (a) : (b)
int findMax(int *arr, int size)
{
    if(size==1) return *arr;
    return max(*arr, findMax(arr+1, size-1));
}
int main()
{
    int a[7]={1, 6, 3, 2, 4, 7, 5};
    printf("%d", findMax(a, 7));
    return 0;
}
