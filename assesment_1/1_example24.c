#include<stdio.h>
int main(){
    int a,b,temp1,temp2,num;
    scanf("%d",&a);
    num=a;
    b=a-5;
    temp1=num%10;
    num=num/10;
    temp2=num%10;
    ((temp1&1)&&(temp2&1))||printf("%d",a);
    ((temp1&1)&&(temp2&1))&&printf("%d",b);
    return 0;
}