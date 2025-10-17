#include <stdio.h>

int main() {
	// your code goes here
    int a,b;
    scanf("%d %d",&a,&b);
    if(b >= 3*a){
        printf("Rain");
    }
    else{
        printf("Dry");
    }
}

