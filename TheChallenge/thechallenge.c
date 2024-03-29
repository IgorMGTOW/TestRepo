#include <stdio.h>

int __cdecl main(){
    int x;
    int y;
    printf("input x\n");
    scanf("%d\n", &x);
    printf("input y\n");
    scanf("%d\n", &y);
    if (x > y) {
        printf("x is greater than y\n");
    }
    else if (x < y) {
        printf("y is greater than x\n");
    }
    else {
        printf("x and y are equal");
    }
    return 0;
}
