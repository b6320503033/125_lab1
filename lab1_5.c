#include<stdio.h>
int main()
{
    int N,i,max;
    scanf("%d",&N);

    int a[N];

    for(i=1; i<=N; i++)
        scanf("%d",&a[i]);

    max = a[1];

    for(i=1; i<=N; i++)
    {
        if(a[i]>a[i+1])
        {
            max=a[i];
            break;
        }

    }
    printf("%d %d",i,max);
    return 0;
}
