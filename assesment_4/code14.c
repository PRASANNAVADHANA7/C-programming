#include<stdio.h>
int main(){
    int num,mul=1,x,first,last,middle;
    scanf("%d",&num);
    x=num;
    loop: if(x>0){
        x=x/10;
        mul=mul*10;
        goto loop;
    }
    middle=(num/10)%(mul/100);
    first=num/(mul/10);
    last=num%10;
    num=last*(mul/10)+middle*10+first;
printf("%d",num);

}