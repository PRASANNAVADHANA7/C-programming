#include<stdio.h>
int main(){
   int a,b=0;
   scanf("%d",&a);
   for(int i=0;i<3;i++){
    b=b+a%10;
    a=a/10;
   }
    printf("%d",b);
    return 0;
}