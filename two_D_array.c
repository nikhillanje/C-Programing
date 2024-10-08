#include<stdio.h>
void main()
{
    int row,cal;
    printf("enter the rows\n");
    scanf("%d",&row);
    printf("enter the columns\n");
    scanf("%d",&cal);    

    int a[row][cal],i,j;

    printf("enter the elements of %d*%d matrics\n",row,cal);

    for(i=0;i<row;i++)
    {
        for(j=0;j<cal;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<cal;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");        
        
    }
}