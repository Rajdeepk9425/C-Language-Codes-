#include<stdio.h>
int main()

{
    int a;
    printf("enter amount\n");
    scanf("%d",&a);
    if(a>=50000 && a<=200000)
    {
        printf("target complete\n");
        if(a>=100000)
        {
            printf("eligible for bonus ");
        }
    }
return 0;
}