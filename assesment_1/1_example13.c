#include<stdio.h>
int main(){
    int a,reverse=0,temp=0;
    scanf("%d",&a);
    for(int i=0;i<2;i++){
        reverse=reverse*10;
        temp=a%10;
        reverse=reverse+temp;
        a=a/10;
    }
    printf("%d",reverse);
    return 0;
}