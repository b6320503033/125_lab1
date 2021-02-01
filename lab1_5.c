#include<stdio.h>
int main()
{
    int N,i,max,k=1;
    scanf("%d",&N);

    int a[N];

    for(i=1; i<=N; i++)
        scanf("%d",&a[i]);

    max = a[1];

    for(i=1; i<=N; i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
        else if(a[i]==a[i+1])
        {
            k++;
        }
    }
    for(i=1; i<=N; i++)
    {
        if(max==a[i])
            break;
    }

    if(k==N)
        i=1;
    printf("%d %d",i,max);
    return 0;
}
