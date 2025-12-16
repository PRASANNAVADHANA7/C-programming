#include<stdio.h>
int main(){
    int a,temp=0,reverse=0,last=0;
    scanf("%d",&a);
     temp=a%100;
       while(temp>0){
        reverse=reverse*10;
        last=temp%10;
        reverse=reverse+last;
        temp=temp/10;
       }
       a=a/100;
       a=a*100;
       a=a+reverse;
       printf("%d",a);
    return 0;
}