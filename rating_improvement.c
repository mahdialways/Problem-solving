#include <stdio.h>

int main() {
	// your code goes here
	int n;
	scanf("%d",&n);
    for (int i =1; i<=n;i++){
        int x,y;
        scanf("%d %d",&x,&y);
        if(y-x <= 200 && y-x>=0){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
}

