#include<stdio.h>

int reverse(int n){
    int rev = 0;
    while(n!=0){
        int digit = n%10;
        rev = rev*10 + digit;
        n = n/ 10;
    }

    return rev;
}

int main(){
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    int reversedNumber = reverse(number);
    if(reversedNumber == number){
        printf("The number %d is a palindrome.\n", number);
    } else {
        printf("The number %d is not a palindrome.\n", number);
    }

    return 0;
}