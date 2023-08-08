#include<stdio.h>
int main(){
    int num,ex,copy,sum=0,prod=1;
    printf("Enter number : ");
    scanf("%d",&num);
    copy=num;
    while(num>0){
        ex=num%10;
        sum+=ex;
        num=num/10;
    }

    num=copy;

    while(num>0){
        ex=num%10;
        prod*=ex;
        num=num/10;
    }
    if(sum==prod){
        printf("It is a Spy number.");
    }else{
        printf("It's not a spy number");
    }
}