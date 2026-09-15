#include <stdio.h>
#include <string.h>
int main(void) {
    int n;
    while (scanf("%d", &n) != EOF) {
        int esq[61] = {0}, dir[61] = {0};
        char f;
        int s;
        for(int i = 0; i < n; i++) {
            scanf("%d %c", &s, &f);
            if(f=='E') esq[s]++;
            else if(f=='D') dir[s]++;
        }
        int pares = 0;
        for(int i=30; i <= 60; i++) {
            if(esq[i] < dir[i]) pares += esq[i];
            else pares += dir[i];
        }
        printf("%d\n", pares);
    }
    return 0;
}
