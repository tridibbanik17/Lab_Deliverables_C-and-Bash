/* Starter code for Lab 6.1 Activity
 *
 * This file will not compile as is. You need to create the digits function.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include "digits.h"

/* Main function. Runs test cases for the digits function.
 * Exits with failure code on first test case fail.
 * Otherwise exits with success.
 */

int digits(long, int*, int*); // Function prototype

//digits implementation
int digits(long n, int *max, int *min) {
    int sum = 0;
    int digit;



   //Handle negative numbers by converting to positive.
   if (n < 0) {
         n = -n;
   }

   //If n equals 0, set max and min equals 0, and return 0.
   if (n == 0) {
           *min = 0;
           *max = 0;
           return 0;
   }


   //Initialize min and max
   *min = 9;
   *max = 0;

   while (n > 0) {
       digit = n % 10; //Get the rightmost digit.
       sum += digit; //Add digit to sum.


   //update max and min
   if (digit > *max) {
       *max = digit;
   }

   if (digit < *min) {
       *min = digit;
   }

   n = n / 10; //remove the rightmost digit.

   }
   return sum;
}
                       
