#include<stdio.h>
int main(){
    int x,digit_zero,digit_one;
    scanf("%d",&x);
    digit_zero=x%10;
    x=x/10;
    digit_one=x%10;
    x=(digit_zero==digit_one);
    printf("%d",x);
    return 0;
}