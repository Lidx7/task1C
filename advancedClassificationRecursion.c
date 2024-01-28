#include <stdio.h>

int isPalindromeRec(int num, int divisor) {
    if (num < 10) {
        return 1; 
    }

    int left = num;
    while (left >= 10) {
        left /= 10;
    }

    int right = num%10;

    if (left != right) {
        return 0; 
    }

    num = (num%divisor) / 10;

    return isPalindromeRec(num, divisor/100);
}

int isPalindrome(int n) {
    if (n<0) {
        return 0;
    }
    
    int divisor = 1;
    while (n/divisor >= 10) {
        divisor *= 10;
    }
    
    return isPalindromeRec(n, divisor);
}




int isArmstrongHelper(int n, int digits) {
    if (n == 0) {
        return 0;
    }

    int remainder = n % 10;
    int ans = 0;

    for(int i = digits; i>0; i--){
        ans *= remainder;
    }

    return (int)ans + isArmstrongHelper(n / 10, digits);
}

int isArmstrong(int n) {
    int original = n, digits = 0;

    while(original){
        original /= 10;
        digits++;
    }
    int sumOfPowers = isArmstrongHelper(n, digits);

    if(n == sumOfPowers){
        return 1;
    }
    
    return 0;
    
}

    
