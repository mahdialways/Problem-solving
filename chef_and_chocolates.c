#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int x, y, z, total;
        scanf("%d %d %d", &x, &y, &z);
        // Your code goes here
        total = (x*5)+(y*10);
        printf("%d\n",total/z);
    }

}
