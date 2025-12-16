#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    b=a;
    b=a-5;
    (a&1)&&printf("%d",b);
    (a&1)||printf("%d",a);
    return 0;
}