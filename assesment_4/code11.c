#include<stdio.h>
int main(){
    int a,digits=0;
    scanf("%d",&a);
    loop:if(a>0){
       a=a/10;
       digits++;
       goto loop;
    }
    printf("%d",digits);
    return 0;
}