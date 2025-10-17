#include <stdio.h>

int main() {
	// your code goes here
    int l,r;
    scanf("%d %d",&l,&r);
    if(l>=r){
        printf("%d",l-r);
    }
    else{
        printf("%d",r-l);
    }
}

