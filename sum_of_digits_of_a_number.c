#include<stdio.h>
int sumOfDigits(int num);
int sum = 0;
int main(void){
    
    printf("%d",sumOfDigits(123));
    return 0;
}
int sumOfDigits(int num){
    
    if(num == 0){
        return 0;
    }else{
      return (num % 10) + sumOfDigits(num / 10);
    }
}