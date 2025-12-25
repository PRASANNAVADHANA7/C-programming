//get the count of digits in a number which are perfect squares
#include<stdio.h>
#include<math.h>
int main(){
    int a,num,digit=0;
    scanf("%d",&a);
    while(a>0){
        num=sqrt(a%10);
        if(num*num==a%10){
            digit++;
        }
        a=a/10;
    }
    printf("%d",digit);
}
