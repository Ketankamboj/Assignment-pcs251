#include<stdio.h>
int main(){
    int n,count=0,flag=0,i,j;
    printf("enter size of array: ");
    scanf("%d",&n);
    int num=n/2;
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(num<=count){
            flag=1;
            break;
        }
        else{
            flag=0;
            count=0;
        }
    }

    if(flag==1){
        printf("%d",arr[i]);
    }
    else{
        printf("No majority element found in array");
    }
    return 0;
}