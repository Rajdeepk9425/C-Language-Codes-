#include<stdio.h>
int main()
{
    int i,j,r,c;
    printf("enter no. of rows\n");
    scanf("%d",&r);

    printf("enter no. of column\n");
    scanf("%d",&c);
    int arr[r][c];
    printf("enter %d elements\n",r*c);

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("matrix is :- \n");
    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
        {
            printf("%d",arr[i][j]); 
        }
        printf("\n");
    }
    return 0;
}