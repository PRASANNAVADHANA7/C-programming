#include<stdio.h>
int main(){
    int num,last;
    scanf("%d",&num);
    last=num%10;
    num=((num/100)*100)+last;
    printf("%d",num);
    return 0;
}