#include<stdio.h>
int main(){
    int x=25,a,temp;
    loop: if(x<=61){
        a=x%10;
        temp=x;
        temp=temp/10;
        temp=temp+a;
        if(temp==7){
            printf("%d\n",x);
        }
        x=x+18;
        goto loop;
    }
}