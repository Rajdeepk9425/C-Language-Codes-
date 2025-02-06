/*/
#include<stdio.h>
int main()
{
    int i,s=1;
    for(i=1;i<=5;i++)
    {
        s=s*i;
    }
    printf("%d\n",s);

    return 0;
}
*/

//factorial of any no. by user

#include<stdio.h>
int main()
{
    int i=1,s=1,n;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s*i;
    }
    printf("factorial of %d is %d\n",n,s);
    return 0;
}