#include<stdio.h>
int main(){
    int x=71,sum=0;
    loop: if(x<=79){
     sum=sum+x;
     x=x+2;
     goto loop;
    }
    printf("%d",sum);
    return 0;
}