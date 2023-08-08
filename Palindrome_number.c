#include<stdio.h>
void main(){
    int num,ex,rev=0,copy;
    printf("Enter any number : ");
    scanf("%d",&num);
    copy=num;
    while(num>0){
        ex=num%10;
        rev=rev*10+ex;
        num=num/10;
    }if(copy==rev){
        printf("\nIt's a Palindrome number");
    }else{
        printf("\nNot a Palindrome number");
    }
}