//biggest four digit number divisable by 7 and 9
#include<stdio.h>
int main(){
    int num;
    for(int i=1000;i<=9999;i++){
        if(i%7==0&&i%9==0){
            num=i;
        }
    }
    printf("%d",num);
}