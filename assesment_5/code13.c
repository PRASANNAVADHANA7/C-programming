#include<stdio.h>
int main(){
    int num,reverse=0,a;
    scanf("%d",&num);
    while(num>0){
        a=num%10;
        reverse=reverse*10+a;
        num=num/10;
    }
    printf("%d",reverse);
}