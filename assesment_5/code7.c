#include<stdio.h>
int main(){
    int a,temp;
    for(int i=25;i<=61;i=i+18){
        a=i%10;
        temp=i;
        temp=temp/10;
        temp=temp+a;
        if(temp==7){
            printf("%d\n",i);
    }
    }
}