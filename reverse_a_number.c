#include<stdio.h>
void reverseNum(int num);
int reverse = 0;
int main(void){
    reverseNum(123);
    printf("%d",reverse);
    return 0;
}
void reverseNum(int num){
    
    if(num == 0){
        return;
    }else{
    reverse = reverse*10+ (num % 10); 
    reverseNum(num / 10);
    }
}