#include<stdio.h>
int main(){
    int x=24,a,temp;
    loop: if(x<=60){
        a=x%10;
        temp=x;
        temp=temp/10;
        temp=temp+a;
        if(temp==6){
            printf("%d\n",x);
        }
        x=x+18;
        goto loop;
    }
}