//number of two digit perfect square in a number
#include<stdio.h>
#include<math.h>
int main(){
    int a,num,digit=0;
    scanf("%d",&a);
    while(a>=10){
        num=sqrt(a%100);
        if(num*num==a%100){
            digit++;
        }
        a=a/10;
    }
    printf("%d",digit);
}
