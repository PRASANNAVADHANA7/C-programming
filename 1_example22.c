#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    b=a;
    b=a-5;
    c=(a/10)%10;
    (c&1)&&printf("%d",b);
    (c&1)||printf("%d",a);
    return 0;
}