#include<stdio.h>
int main(){
    int r,c,arr[4][4];
    printf("enter value of rows:");
    scanf("%d",&r);
    printf("enter value of column:");
    scanf("%d",&c);

    for(int i=0; i<r;i=i+1){
        for(int j=0; j<c; j=j+1){
            scanf("%d",&arr[i][j]);
      }
    }

    int toprow=0,bottomrow=r-1, leftcol=0, rightcol=c-1, totalelements=0;
    while(totalelements < r*c){
        for(int j=leftcol; j<=rightcol; j++){
            printf("%d",arr[toprow][j]);
            totalelements++;
        }
        toprow++;
        for(int j=toprow; j<=bottomrow; j++){
            printf("%d",arr[j][rightcol]);
            totalelements++;
        }
        rightcol--;
        for(int j=rightcol; j>=leftcol; j--){
            printf("%d",arr[bottomrow][j]);
            totalelements++;
        }
        bottomrow--;
        for(int j=bottomrow; j>=toprow; j--){
            printf("%d",arr[j][leftcol]);
            totalelements++;
        }
        leftcol++;
    }
    return 0;
}