#include<stdio.h>
int main(){
    int r,c;
    printf("enter value of rows:");
    scanf("%d",&r);
    printf("enter value of column:");
    scanf("%d",&c);
    int arr[5][5];

    for(int i=0; i<r;i=i+1){
        for(int j=0; j<c; j=j+1){
            scanf("%d",&arr[i][j]);
      }
    }

    for(int j=0; j<c; j++){
        if(j%2==0){
            for(int i=0; i<r; i++){
                printf("%d",arr[i][j]);
            }
        }
        else{
            for(int j=r-1; j>=0; j--){
                printf("%d",arr[j][j]);
            }
        }
    }
    return 0;
}