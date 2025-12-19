#include<stdio.h>
int main(){
    int num,reverse=0;
    scanf("%d",&num);
    loop:if(num>0){
        reverse=reverse*10;
        reverse=(num%10)+reverse;
        num=num/10;
        goto loop;
    }
    printf("%d",reverse);
    return 0;
}