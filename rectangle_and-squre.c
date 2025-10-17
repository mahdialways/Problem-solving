#include <stdio.h>

int main() {
	// your code goes here
    int a,b,c,areaa,areac;
    scanf("%d %d %d",&a,&b,&c);
    areaa = a*b;
    areac = c*c;
    if(areaa == areac){
        printf("Yes");
    }
    else{
        printf("No");
    }
}

