#include<stdio.h>
int main(){
    int num,digit=0;
    scanf("%d",&num);
    while(num>0){
        num=num/10;
        digit++;
    }
    printf("%d",digit);
}