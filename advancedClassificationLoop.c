#include <stdio.h>

int isPalindrome(int n){
    if(n<0){
        return 0;
    }

    int reversed = 0, remainder, original = n;

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if (original == reversed){
        return 1;
    }

    return 0;

}

int isArmstrong(int n){
    
    int originalNum = n, remainder, digits = 0;
    float result = 0.0;

    for (originalNum = n; originalNum != 0; ++digits) {
        originalNum /= 10;
    }

    for (originalNum = n; originalNum != 0; originalNum /= 10) {
        remainder = originalNum % 10;

        int digitsTemp = digits;
        while(digits){
            remainder *= remainder;
            digits--;
        }

        result += remainder;
    }

    if ((int)result == n){
        return 1;
    }

    return 0;

}