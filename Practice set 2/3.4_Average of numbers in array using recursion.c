#include<stdio.h>
float findAvg(float* arr, int size)
{
    if(size==1) return *arr;
    return (findAvg(arr+1, size-1) * (size-1) + *arr)/(float)size; // recollect the concept of adding a data point to a set of data whose avg is already computed
}
int main()
{
    float a[7]={1.5, 6.2, 3.5, 2.6, 4.7, 7.3, 5.0};
    printf("%f", findAvg(a, 7));
    return 0;
}
