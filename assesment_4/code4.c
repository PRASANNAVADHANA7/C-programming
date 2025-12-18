#include<stdio.h>
int main(){
    int sum=0,x=6;
    loop:if(x>=0){
        sum=sum+x;
        x--;
        goto loop;
    }
    printf("%d",sum);
    return 0;
}