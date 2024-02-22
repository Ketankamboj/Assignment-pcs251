#include<stdio.h>
int main()
{
    int arr[3][2]={{1,2},{3,4},{5,6}};
    int brr[2][2]={{7,8},{9,10}};
    int res[3][2];
    for(int i=0;i<3;i=i+1){
        for(int j=0;j<2;j=j+1){
         res[i][j] = 0;
            for(int k=0; k<2; k=k+1){
                res[i][j]=res[i][j]+arr[i][k]*brr[k][j];
            }
        }
    }
    for(int i=0;i<3;i=i+1){
        for(int j=0;j<2;j=j+1){
        printf("%d ",res[i][j]);
     }  
     printf("\n");
    }
    return 0;
}