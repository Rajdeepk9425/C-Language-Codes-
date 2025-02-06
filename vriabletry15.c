/*#include<stdio.h>
int main()
{
    int i,j,s=0;
    for(i=1;i<=5;i++)
    {
        s=s+i;
    }
    printf("%d\n",s);
    return 0;
}
*/
#include<stdio.h>
int main()
{
    int i,j,s=0;
    for(i=1,j=11;i<=5&j<=15;i++,j++)
    {
        s=s+j-i;
    }
    printf("%d\n",s);
    return 0;
}

