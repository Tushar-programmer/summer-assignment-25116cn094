#include<stdio.h>
int main() {
    int n;
    printf("enter number:");
    scanf("%d", &n);
    int a =0;
    int b= 1;
    int sum = 1;
    if(n==1)
    printf("Nth fibonacci number = %d",a);
    else if (n==2)
    printf("Nth fibonaaci number = %d",b);
    else{
        for(int i=3; i<=n; i++){
            sum=a+b;
            a=b;
            b=sum;
        }
        printf("Nth fibonacci number = %d", b);
    }
    return 0;
}
