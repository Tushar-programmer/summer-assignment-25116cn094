#include<stdio.h>
int main() {
    int n;
    printf("enter number:");
    scanf("%d",&n);
    int product =1;
    while(n>0){
        product = product * (n%10);
        n = n/10;
    }
    printf("the product of digits is %d", product);
return 0;
    }
