#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    b=a%10;
    a=a/10;
    if(a>=b){printf("success");
}
else{
    printf("failure");
}
    return 0;
}