#include<stdio.h>
 long int factorial(int n){
 long int fact =1;
 int i;
 for(int i= 1; i<=n; i++){
    fact = fact*i;
 }
 return fact;
}

int main() {
    int n;
    printf("enter number:");
    scanf("%d", &n);
    printf("factorial = %ld",factorial(n));
    return 0;
}
