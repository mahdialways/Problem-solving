#include <stdio.h>

int main() {
	// your code goes here
    int a,b,c;
    scanf("%d %d %d",&a, &b, &c);
    if(a+b>c && b+c>a && a+c>b){
        printf("Yes");
    }
    else{
        printf("No");
    }
}

