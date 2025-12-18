#include<stdio.h>
#include<math.h>
int main(){
     int num,i=2,digit=0;
    scanf("%d",&num);
    loop:if(i<sqrt(num)){
        if(num%i== 0)
            digit++;
        i++;
        goto loop;
    }
    if(digit==0)
        printf("Prime");
    else
        printf("Not Prime");
    return 0;
}