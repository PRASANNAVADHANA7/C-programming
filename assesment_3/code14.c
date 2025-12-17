#include<stdio.h>
int main(){
    int x,num;
    scanf("%d",&num);
    x=num%100;
    num=num/100;
   if(x==num){
    printf("success");
   }
   else{
    printf("failure");
   }
    return 0;
}