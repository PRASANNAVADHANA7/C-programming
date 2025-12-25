//to print total count of numbers less than 100000 and whose sum of digits is 14
#include<stdio.h>
int main(){
    int count=0,sum=0,num;
    for(int i=77;i<100000;i++){
        num=i;
        sum=0;
        while(num>0){
            sum=sum+num%10;
            num=num/10;
        }
        if(sum==14)count++;
    }
    printf("%d",count);
}