#include <stdio.h>

int main(){
   
   int n;
   scanf("%d", &n);

   if(n >= 1000){

    printf("tk 1000\n");
    if(n >= 1100){
       printf("more than 1000\n");
    }else{
       printf("less than 1100\n");
      }
      
   }else{
       printf("less than 1000\n");
   }


    return 0;
}