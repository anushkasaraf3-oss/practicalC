#include <stdio.h>

//anushka saraf 10260//
int sumOfDigits(int n) {
    int sum = 0;
    
    if (n < 0) n = -n;

    while (n != 0) {
        sum += n % 10;  
        n = n / 10;    
    }
    
    return sum;
}

int main() {
    int number = 4123;
    printf("Sum of digits of %d is %d\n", number, sumOfDigits(number));
    return 0;
}
