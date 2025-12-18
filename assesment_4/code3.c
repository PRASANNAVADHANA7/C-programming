#include<stdio.h>
int main(){
    int sum=0,x=1;
    loop:if(x<=5){
        sum=sum+x;
        x++;
        goto loop;
    }
    printf("%d",sum);
    return 0;
}