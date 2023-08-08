/*
Armstrong number
=> An Armstrong number is a number whose sum of the cubes of its  digits equals the number itself. For example, 153 is an Armstrong number.

If you take the digits of 153 individually and cube them:

(1 × 1 × 1) + (5 × 5 × 5) + (3 × 3 × 3)

Then add the results:

1 + 125 + 27

You'll get 153, the same as the original number. */



#include<stdio.h>
#include<math.h>
void main(){
    int num,count=0,copy,ex,sum=0,i;
    printf("Enter any number : ");
    scanf("%d",&num);
    copy=num;
    while(num>0){
        num=num/10;
        count++;
    }
    num=copy;
    while(num>0){
        ex=num%10;
        sum=sum+pow(ex,count);
        num=num/10;
        
    }
    if(copy==sum){
        printf("Armstrong number");
    }else{
        printf("Not a Armstrong number");
    }

}