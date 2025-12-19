#include<stdio.h>
#include<math.h>
int main(){
         int num,flag=0;
    scanf("%d",&num);
    num=(num/10)%100;
    for(int i=2;i<sqrt(num);i++){
        if(num%i== 0)
            flag++;
    }
    if(flag==0)
        printf("prime");
    else
        printf("not prime");
}