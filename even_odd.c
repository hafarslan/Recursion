#include<stdio.h>

void natural(int lowerNum,int upperNum);

int main(void){
    int lowerNum,upperNum;
    printf("Enter the lower number and upper number: ");
    scanf("%d%d",&lowerNum,&upperNum);
    natural(lowerNum,upperNum);

}
void natural(int lowerNum, int upperNum){
    if(lowerNum > upperNum){
        return ;
    }
        printf("%d,", lowerNum);

        natural(lowerNum + 2, upperNum);
}