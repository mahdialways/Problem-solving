#include <stdio.h>

int main() {
	// your code goes here
   int n;
   scanf("%d",&n);
   for(int i = 1; i<=n; i++){
        int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    float average;
    average = (a+(float)b)/2;
    if(average >c){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
   }
}

