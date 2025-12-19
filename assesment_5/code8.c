#include<stdio.h>
int main(){
    int a,temp;
    for(int i=24;i<=60;i=i+18){
         a=i%10;
        temp=i;
        temp=temp/10;
        temp=temp+a;
        if(temp==6){
            printf("%d\n",i);
    }
}
}