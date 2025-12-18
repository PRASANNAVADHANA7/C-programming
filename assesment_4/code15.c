#include<stdio.h>
int main(){
    int num,x,mul=1,last;
    scanf("%d",&num);
    x=num;
    loop: if(x>0){
        x=x/10;
        mul=mul*10;
        goto loop;
    }
    mul=mul/10;
    last=num/mul;
    if((last&1)==0){
        printf("%d",num);
    }
    else{
        last=last-1;
        num=(last*mul)+(num%mul);
        printf("%d",num);
    }
}