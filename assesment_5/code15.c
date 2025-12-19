#include<stdio.h>
int main(){
    int num,x,mul=1,last;
    scanf("%d",&num);
    x=num;
   while(x>0){
        x=x/10;
        mul=mul*10;
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