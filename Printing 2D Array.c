#include<stdio.h>
void main()
{
    int a[3][3],i,j;

    printf("enter the elements of 3*3 matrics");

    for(i=0;i<=2;i++)
    {
        for(j=0;j=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("\n%d \t",a[i][j]);
        }
        printf("\n");
    }
}