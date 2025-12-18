#include<stdio.h>
int main(){
    int num,sum=0,a;
    scanf("%d",&num);
    loop: if(num>0){
        a=num%10;
        sum=sum+a;
        num=num/10;
        goto loop;
    }
    printf("%d",sum);
return 0;
}