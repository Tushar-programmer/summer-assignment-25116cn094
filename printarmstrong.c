
#include<stdio.h>
int main() {
    int i,n,temp,rem,sum;
    printf("enter a number :");
    scanf("%d", &n);
    for( i= 1; i<=n; i++){
        temp=i;
        sum=0;
    while(temp !=0){
        rem= temp%10;
        sum = sum + (rem *rem*rem);
        temp = temp/10;
    }
    if(sum== i)
    printf("%d ",i);
}
   
    return 0;
}