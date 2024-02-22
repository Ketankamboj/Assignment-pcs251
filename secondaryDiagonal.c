#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter number of row: ");
    scanf("%d",&r);
    printf("Enter number of column: ");
    scanf("%d",&c);
    int a[5][5],i,j,sum=0;
    for (i=0; i<r; i++){
        for (j=0; j<c; j++){
            scanf("%d",&a[i][j]);       
        }
        
    }


    for (i=0; i<r; i++){
        for (j=0; j<c; j++){
            if(i+j == r-1){
                sum+=a[i][j];
            }
        }
        
    }
    printf("%d",sum);

    return 0;
}