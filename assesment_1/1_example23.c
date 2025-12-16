#include<stdio.h>
int main(){
    int a,b,c,temp;
    scanf("%d",&a);
    b=a-5;
    c=a;
    while(c>0){
        temp=temp+(c%10);
        c=c/10;
    }
    (temp&1)&&printf("%d",b);
    (temp&1)||printf("%d",a);
    return 0;
}