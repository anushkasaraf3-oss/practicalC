#include <stdio.h>
//anushka saraf 10260//
int main() {
    int N, i;
    int sum_even = 0;
    printf("Enter the positive integer limit (N): ");
    scanf("%d", &N);
    for (i = 1; i <= N; i++) {
        if (i % 2 != 0) {
            continue;
        }
        sum_even += i;
    }
    printf("Sum of even numbers from 1 to %d is: %d\n", N, sum_even);

    return 0;
}
