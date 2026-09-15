#include <stdio.h>
 
int main() {
 
    int i, j=7;

    for(i=0; i<=9; i++) {
        if(i%2 != 0) {
            printf("I=%d J=%d\n", i, j);
            printf("I=%d J=%d\n", i, j-1);
            printf("I=%d J=%d\n", i, j-2);
            j += 2;
        }
    }
 
    return 0;
}