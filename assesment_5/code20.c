//program to count prime numbers of single digit prime numbers
#include<stdio.h>
#include<math.h>
int main(){
         int flag=0,x=0;
   for(int num=2;num<=9;num++){
    for(int i=2;i<= (int)sqrt(num);i++){
        if(num%i== 0){
            flag=1;
            break;
        }
    }
      if(flag==0){
        x++;
      }
      flag=0;
}    
printf("%d",x);
}