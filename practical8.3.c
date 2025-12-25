#include <stdio.h>

//anushka saraf 10260//
void printTriangle(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
       
        printf("\n");
    }
}

int main() {
    int height = 5;
    printTriangle(height);
    return 0;
}
