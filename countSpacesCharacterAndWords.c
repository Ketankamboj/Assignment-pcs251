#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    fgets(str,20,stdin);

    int spaces=0,count=0;
    for(int i=0; i<strlen(str); i++){
        if(str[i] == " "){
            spaces++;
        }
        count++;
    }

    int words = spaces+1;
    int characters = count-spaces;

    printf("%d",spaces);
    printf("%d",words);
    printf("%d",characters);
    return 0;
}