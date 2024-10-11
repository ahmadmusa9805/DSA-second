#include <stdio.h>

int main(){
   
   int n;
   scanf("%d", &n);

   if(n % 2 == 0){
      printf("Even");
   }else{
      printf("Odd");
   }
   // if(n % 2 != 0){
   //    printf("Odd");
   // }else{
   //    printf("Even");
   // }

    return 0;
}