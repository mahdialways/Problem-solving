#include <stdio.h>
#include <string.h>

int main() {
    char first[100];
    char second[100];

    scanf("%s", first);
    scanf("%s", second);
    for (int i = 0; first[i] != '\0'; i++) {
        first[i] = tolower(first[i]);
    }
    for (int i = 0; second[i] != '\0'; i++) {
        second[i] = tolower(second[i]);
    }

    int result = strcmp(first, second);
    if(result == 0){
        printf("0");
    }
    else if(result>0){
        printf("1");
    }
    else{
        printf("-1");
    }
}