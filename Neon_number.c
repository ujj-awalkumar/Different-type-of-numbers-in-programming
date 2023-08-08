#include<stdio.h>
void main(){
    int num,copy,ex,rem=0;
    printf("Enter any number : ");
    scanf("%d",&num);
    copy=num;
    num=num*num; 
    while(num>0){
        ex=num%10;
        rem=rem+ex;
        num=num/10;
    }
    if(copy==rem){
        printf("\nNeon number.");
    }else{
        printf("\nNot a neon number.");
    }
}