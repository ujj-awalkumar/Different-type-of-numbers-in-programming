/*
Buzz number
=> Any number that ends with 7 or is divisible by 7 is called a buzz number.

-> For example, 127 ends with 7, so it is a Buzz number. Also, 343 is buzz because it is divisible by 7.
*/
#include<stdio.h>
int main(){
    int num,copy,ex,rem,i,flag=0;
    printf("Enter number : ");
    scanf("%d",&num);
    copy=num;
    for(i=1;i<2;i++){
        ex=num%10;
        rem=ex;
        num=num/10;
    }
    num=copy;

    if(num%7==0){
        flag=1;
    }

    if((flag==1)||(rem==7
    )){
        printf("It is a Buzz number");
    }else{
        printf("Not a buzz number");
    }
}