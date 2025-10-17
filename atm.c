#include <stdio.h>

int main() {
	// your code goes here
    int x;
    float balance;
    float y;
    scanf("%d",&x);
    scanf("%f",&y);
    if(x%5 == 0 && x+0.50<=y){
        balance = y - ((float)x+0.50);
        printf("%0.2f",balance);
    }
    else{
        printf("%0.2f",y);
    }
}

