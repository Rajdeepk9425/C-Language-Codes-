#include<stdio.h>
int main()
{
    int i,n,s=1;
    printf("enter a number");
    scanf("%d",&n);
    for(i=n;i<=n*10;i=i+n)
    {
        printf("%d\n",i);
    }
    return 0;
}