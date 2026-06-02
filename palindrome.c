#include<stdio.h>
int main() {
    int n, original, reverse=0;
    printf("enter number:");
    scanf("%d",&n);
    original = n;
    while(n>0){
        reverse= reverse *10+(n%10);
        n=n/10;
    }
    if(original == reverse){
    printf("palindrome number");
    }
    else{
        printf("not a palindromenumber");
    }
    return 0;
}
