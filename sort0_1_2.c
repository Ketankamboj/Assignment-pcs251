#include<stdio.h>
int main(){
    int n;
    printf("enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int l=0, m=0, h=n-1;
    while(m<=h){
        if(arr[m]==0){
            int t = arr[l];
            arr[l] = arr[m];
            arr[m] = t;
            l++;
            m++;
        }
        else if(arr[m]==1){
            m++;
        }
        else{
            int t = arr[m];
            arr[m] = arr[h];
            arr[h] = t;
            h--;
        }
    }

    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}