#include<stdio.h>
int main()
{
    int i, j, r, prev[100], row[100];
    scanf("%d", &r);
    for(i=1; i <= r; i++)
    {
        row[0]=row[i-1]=1;
        for(j=1; j<= r - i; j++) printf(" ");
        for(j=1; j < i - 1; j++)
        {
            row[j] = prev[j-1]+prev[j];
        }
        for(j=0; j < i; j++)
        {
            printf(" %d ", row[j]);
            prev[j]=row[j];
        }
        printf("\n");
    }
    return 0;
}
