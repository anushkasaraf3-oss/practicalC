#include <stdio.h>
//anushka saraf 10260//
int main() {
    int start_val, end_val, i;

    printf("Enter the starting number (a): ");
    scanf("%d", &start_val);
    printf("Enter the ending number (b): ");
    scanf("%d", &end_val);

    printf("Numbers from %d to %d are: \n", start_val, end_val);
    for (i = start_val; i <= end_val; i++) {
        printf("%d ", i);
    }
    printf("\n"); 
    return 0;
}