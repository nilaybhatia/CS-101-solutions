#include<stdio.h>
#define N 6
int main()
{
    int i, j, c;
    printf(("Number\tFrequency\n"));
    int a[N]={10, 20, 20, 10, 30, 10};
    for(i = 0; i < N; i++)
    {
        for(j=0; j < i; j++)
            if(a[j]==a[i]) break;
        if(i==j) /*a[i] is distinct*/
        {
            c=1; // one occurence is a[i] itself
            for(j = i + 1; j < N; j++) //check ahead
                if(a[j]==a[i]) c++;
            printf("%d\t%d\n", a[i], c);

        }
    }

    return 0;
}
