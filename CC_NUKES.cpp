#include<stdio.h>
int main()
{
    int i,a,n,k;
    scanf("%d%d%d",&a,&n,&k);
    int ar[k];
    ar[0]=a;
    for(i=0;i<k;i++)
    {
                    ar[i+1]=ar[i]/(n+1);
                    ar[i]=ar[i]%(n+1);
    }
    for(i=0;i<k;i++)
    printf("%d ",ar[i]);
    return 0;
}
