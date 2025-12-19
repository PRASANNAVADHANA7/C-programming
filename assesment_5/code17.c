#include<stdio.h>
#include<math.h>
int main(){
     int num,flag=0,sum=0,a;
    scanf("%d",&num);
    a=num;
    while(a>0){
        sum=sum+a%10;
        a=a/10;
    }
    for(int i=2;i<sqrt(num);i++){
        if(num%i== 0)
            flag++;
    }

    if(flag==0 && sum==14)
        printf("prime and sum is equal  to 14");
    else if(flag==0 && sum!=14)printf("prime and sum is not equal to 14");
    else if(flag!=0 && sum==14)printf("not prime and sum is equal to 14");
    else printf("not prime and sum is not equal to 14");
    return 0;
}