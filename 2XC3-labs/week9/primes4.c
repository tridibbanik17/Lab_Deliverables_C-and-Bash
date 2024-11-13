/* This file is to be used with Lab 9.2. Commenting is minimal
 * so you can focus on the code. Sam Scott, McMaster, 2024.*/
// This file is primes4.c
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>

bool quickcheck(int n) {
    return n < 2;
}

/* return true if b is a factor of a, false otherwise */
bool checkfactor(int a, int b) {
    return a % b == 0;
}

/* return true if n is prime, false otherwise */
bool isprime(int n) {
    if (quickcheck(n))
        return false;

    int limit = (int) sqrt(n);
    for (int factor = 2; factor <= limit; factor++)
        if (checkfactor(n, factor))
            return false;

    return true;
}

/* print primes from -200000 to 200000 */
void main() {
    long start = clock(); // start timer
    for (int n = -200000; n <= 200000; n++)
        if (isprime(n))
            printf("%d ", n);
    long end = clock();   // end timer
    printf("\nRunning time: %.4f seconds\n", (float)(end - start) / 1000000);
}

