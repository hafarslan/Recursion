#include<stdio.h>

void natural(int lowerNum,int upperNum);
 int sum = 0;
int main(void){
    int lowerNum,upperNum;
    printf("Enter the lower number and upper number: ");
    scanf("%d%d",&lowerNum,&upperNum);
    natural(lowerNum,upperNum);
    printf("%d",sum);
}
void natural(int lowerNum, int upperNum){
   
    if(lowerNum > upperNum){
        return ;
    }
    sum += lowerNum;
        natural(lowerNum + 1, upperNum);
}