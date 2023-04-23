#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Prime numbers up to %d that can be expressed as the sum of consecutive primes preceding it:\n", n);
    
    for (int i = 3; i <= n; i++) {
        if (is_prime(i)) {
            
            int j = 2;
            sum = 0;
            while (sum < i) {
                if (is_prime(j)) {
                    sum += j;
                }
                j++;
            }
            if (sum == i) {
                printf("%d ", i);
            }
        }
    }
    printf("\n");
    return 0;
}
