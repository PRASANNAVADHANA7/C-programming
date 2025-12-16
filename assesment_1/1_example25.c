#include<stdio.h>
int main(){
    int a,num1,sum=0,temp=0,num,s;
    scanf("%d",&a);
    num1=a;
    num=a;
    do{
        while(num>0){
            s=num1%10;
            temp=temp+s;
            num1=num1/10;
            num=num/10;
        }
        num1=0;
        sum=temp;
        num=temp;
        num1=temp;
        temp=0;
    }while(sum>=10);
    printf("%d",sum);
    return 0;
}