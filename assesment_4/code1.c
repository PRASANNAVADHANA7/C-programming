#include<stdio.h>
int main(){
    int num=1;
    loop: if(num<6)
    {
        printf("%d\n",num);
        num++;
        goto loop;
    }
    return 0;
}