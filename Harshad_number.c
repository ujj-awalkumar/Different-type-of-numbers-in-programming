/*
Harshad number
=> A positive integer which is divisible by the sum of all of its digits.

-> he sum of digits of 24 is 2 + 4 = 6, and 24 is divisible by 6, so 24 is a Harshad number.
*/

#include<stdio.h>
int main(){
    int num,ex,sum,copy;
    printf("Enter any number : ");
    scanf("%d",&num);
    copy=num;
    while(num>0){
        ex=num%10;
        sum=sum+ex;
        num/=10;
    }
    if(copy%sum==0){
        printf("Harshad number");
    }else{
        printf("Not a harshad number");
    }
    return 0;
}