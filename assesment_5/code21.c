//get the number and print number of odd digit numbers in it
#include<stdio.h>
int main(){
    int num,digit=0;
    scanf("%d",&num);
    while(num>0){
        if((num%10)%2!=0)digit++;
        num=num/10;
    }
    printf("%d",digit);
}