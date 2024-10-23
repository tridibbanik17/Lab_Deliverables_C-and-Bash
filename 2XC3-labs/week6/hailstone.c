#include <stdio.h>

// Recursive function to calculate the Hailstone sequence
void hailstone(long n) {
    // Base case: when n is 1, stop recursion
    if (n == 1) {
        printf("%ld\n", n);
        return;
    }
    
    // Print the current value of n
    printf("%ld ", n);
    
    // Recursive case: apply Hailstone logic
    if (n % 2 == 0) {
        hailstone(n / 2);  // n is even, divide it by 2
    } else {
        hailstone(3 * n + 1);  // n is odd, apply 3n + 1
    }
}

int main() {
    long n;
    
    // Input the starting number
    printf("Enter a number: ");
    scanf("%ld", &n);
    
    // Start the Hailstone sequence
    printf("Hailstone sequence for %ld is: ", n);
    hailstone(n);
    
    return 0;
}

