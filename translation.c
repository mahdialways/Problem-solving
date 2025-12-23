#include <stdio.h>
#include<string.h>
int main(){

    char inpu1[1000];
    char inpu2[1000];
    char inpu[1000];
    int result = 1;
    scanf("%s",inpu1);
    scanf("%s",inpu2);
    int len1 = strlen(inpu1);
    int len2 = strlen(inpu2);
    if(len1== len2){
        
    for(int i = 0,j=len1; inpu1[i]!= '\0'; i++){
        inpu[i] = inpu1[j-1-i];
    }
    inpu[len1] = '\0';

    for(int i =0; inpu[i]!= '\0'; i++) {
        if(inpu[i] != inpu2[i]){
            result = 0;
            break;
        }
    }
    if(result == 1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    }
    else{
        printf("NO");
    }

    
    return 0;
}