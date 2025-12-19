#include<stdio.h>
#include<math.h>
int main(){
         int flag=0,x;
   for(int num=2;num<=9;num++){
    for(int i=2;i<sqrt(num);i++){
        if(num%i== 0)
            flag++;
    }
      if(flag==0){
        x++;
      }
      flag=0;
}    
printf("%d",x);
}