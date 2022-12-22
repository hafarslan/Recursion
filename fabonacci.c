#include<stdio.h>
int fabonacci(int num);
int main(void){
    int num;
    // printf("Enter the num: ");
    // scanf("%d",&num);
    for (int i = 0; i < 10; i++)
    {
        
    printf("Fabonacci(%d) = %d\n",i,fabonacci(i));
    }
    
    return 0;
}
int fabonacci(int num){
    if (num == 1)
    {
        return 1;
    }else if(num == 0){
    return 0;
    }else{
        return fabonacci(num - 1) + fabonacci(num - 2);
    }
    
}