#include<stdio.h>

int main() {
    
    int i = 1 ;

    while(i<10){

      printf("The value of i is %d \n", i);
      if(i==7){
        break;
      }
      i++;
    }
    return 0;
}