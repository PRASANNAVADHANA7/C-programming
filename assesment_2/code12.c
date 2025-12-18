#include<stdio.h>
int main(){
    int x,one,two;
    scanf("%d",&x);
    one=x%10;
    x=x/10;
    two=x%10;
    x=(one<=two);
    printf("%d",x);
    return 0;
}