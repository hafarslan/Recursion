#include<stdio.h>
unsigned long long int factorial(int num);
int main(void){
    int num;
    printf("Enter the num: ");
    scanf("%d",&num);
    printf("Factorial = %llu",factorial(num));
    return 0;
}
unsigned long long int factorial(int num){
    if (num <= 1)
    {
        return 1;
    }else{
        return num * factorial(num - 1);
    }
    
}