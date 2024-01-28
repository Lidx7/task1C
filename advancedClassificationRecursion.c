#include <stdio.h>

int isPalindromeRec(int n, int divisor) {
    if (n == 0)
    {
        return divisor;
    }

    return isPalindromeRec(n/10, ((n%10) + (divisor*10)));
}

int isPalindrome(int n) {
    if (n<0) {
        return 0;
    }
    
    int palindrome = isPalindromeRec(n, 0);
    if(palindrome == n)
    {
        return 1;
    }
    return 0;
}



//////////////////////////////////////////
int isArmstrongHelper(int n, int digits) {
    if (n == 0) {
        return 0;
    }

    int remainder = n % 10;
    int ans = remainder;

    for(int i = 1; i<digits; i++){
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

    
