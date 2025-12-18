#include<stdio.h>
int main(){
    int x,num;
    scanf("%d",&num);
    x=num%100;
    num=num/100;
    x=(x==num);
    printf("%d",x);
    return 0;
}