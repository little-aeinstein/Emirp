#include <stdio.h>
#include "Prime.h"
#include "Reverse.h"
int main(){
    int num;
    int revNum;
    for(num = 1; num <= 100; num++){
        if(isPrime(num)){
            revNum = getReverse(num);
            if(revNum == num) continue;
            if(isPrime(revNum)) printf("%d\n", num);
        }
    }
    return 0;
}