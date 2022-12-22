#include<stdio.h>
void displayArray(int arr[],int start, int length);
int main(void){
    int arr[3] = {1,2,3};
    int start  = 0;
    int length = 3;
    displayArray(arr,start,length);
    return 0;
}
void displayArray(int arr[],int start, int length){
if(start >= length){
    return;
}else{
    printf("%d",arr[start]);
    displayArray(arr,start + 1, length);
}
}