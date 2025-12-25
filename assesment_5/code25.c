//to print total number of single digit prime number in a number
#include<stdio.h>
#include<math.h>
int main(){
    int a,num,flag=0,count=0;
    scanf("%d",&a);
    while(a>0){
        num=a%10;
        for(int i=2;i<=sqrt(num)&&num!=1;i++){
            if(num%i==0){
                flag=1;
                break;
            }
        }
         if(flag==0)count++;
     a=a/10;
    flag=0;
    }
    printf("%d",count);
}