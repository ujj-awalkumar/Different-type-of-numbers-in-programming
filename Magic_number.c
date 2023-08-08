/*
Magic number
=> 
*/

#include<stdio.h>
void main(){
    int num,ex,sum,copy,rev=0;
    sum=0;
    int magic=0;
    printf("Enter number : ");
    scanf("%d",&num);
    copy=num;
    while(num>0){
        ex=num%10;
        sum=sum+ex;
        num=num/10;
    }

    num=sum;
   
    while(num>0){
        ex=num%10;
        rev=rev*10+ex;
        num=num/10;
     }
   
    magic=rev*sum;
   
    if(copy==magic){
        printf("It's a magic number.");
    }else{
        printf("Nota magic number.");
    }

}