#include<stdio.h>
int main(){
         int num,flag=0;
    scanf("%d",&num);
    for(int i=2;i<sqrt(num);i++){
        if(num%i== 0)
            flag++;
    }
    if(flag==0)
        printf("prime");
    else
        printf("not prime");
}