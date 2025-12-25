//get a number and print number ot two digit odd numbers in it
#include<stdio.h>
int main(){
    int num,digit=0;
    scanf("%d",&num);
    while(num>=11){
        if((num%100)%2!=0)digit++;
        num=num/10;
    }
    printf("%d",digit);
}