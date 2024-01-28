#include <stdio.h>

int isStrong(int n){
    int sum = 0;
    int temp = n;
    while(temp != 0){
        int current = temp%10;
        int ans = 1;
        for(int i = 2; i<=current; i++){
           ans *= i;
        }
        sum += ans;
        temp /= 10;
    }
    
    if(sum == n){
        return 1;
    }

    return 0;
}

int isPrime(int n){
    int ans = 1;
    if(n == 0){
        ans = 0;
    }
    else if(n == 1){
        ans = 1;
    }

    for(int i = 2; i<=n/2; i++){
        if(n%i == 0){
            ans = 0;
            break;
        }
    }
    
    return ans;
}