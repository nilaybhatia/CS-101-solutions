#include<stdio.h>
#define M 6
#define N 4
int main()
{
    int i, j, k;
    i=j=k=0;
    int a[M]={2, 4, 6, 8, 10, 12};
    int b[N]={1, 3, 5, 7};
    int c[M+N];
    while(i < M && j < N)
    {
        if(a[i] < b[j]) c[k]=a[i++];
        else c[k]=b[j++];
        k++;
    }
    while(i < M)
        c[k++] = a[i++];
    while(j < N)
        c[k++] = b[j++];
    for (i=0; i < M+N; i++) printf("%d ", c[i]);
    return 0;
}
