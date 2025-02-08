
#include<stdio.h>
int main()
{
    int i=1,n=5,f=1;
    while(i<=n)
    {
        f=f*i;
        i++;
    }
    printf("factorial of 5 is %d",f);
    return 0;
}

/*
#include<stdio.h>
int main()
{
int i,s,e,n,f;
printf("enter start\n");
scanf("%d",&s);
printf("enter end\n");
scanf("%e",&e);
for(n=s;n<=e;n++)
{
f=1;
for(i=1;i<=n;i++)
f=f*i;
printf("factorial of %d is %d\n",n,f);
}
return 0;
}
*/