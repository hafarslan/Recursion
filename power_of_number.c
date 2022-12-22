#include<stdio.h>
#include<math.h>

int power(int base, int exponent);
int main(void){
    int base, exponent;
    printf("Enter the base and exponent: ");
    scanf("%d%d",&base,&exponent);
    int result = power(base,exponent);
    printf("%d ^ %d = %d",base,exponent,result);
    return 0;
}
int power(int base, int exponent){
    if (exponent != 0)
    {
        return base * power(base,exponent-1);
    }else{
        return 1;
    }
    
}