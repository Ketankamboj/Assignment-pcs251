#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter number of row");
    scanf("%d",&r);
    printf("Enter number of column");
    scanf("%d",&c);
    int a[5][5],i,j,id = 0;
    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
            scanf("%d",&a[i][j]);       
        }   
    }
    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
            if (i!=j)
             {
                if (a[i][i]==1 && a[i][j]==0)
                {
                    id = 1;
                }    
            }  
        }   
    }
    if (id==1)
    {
        printf("Identity");
    } else
    {
        printf("Not Identity");
    }
    return 0;
}