#include<stdio.h>
int main(){
    int a,temp,num=0,s;
    scanf("%d",&a);
    temp=a/100;
    while(temp>0){
        s=temp%10;
        num=(num*10)+s;
        temp=temp/10;
    }
    a=(num*100)+(a%100);
    printf("%d",a);
    return 0;
}