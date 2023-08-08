#include<stdio.h>
int main(){
    int num,i,j,fact,ex,copy;
    int factorial=0;
    fact=1;
    printf("Enter any number : ");
    scanf("%d",&num);
    copy=num;
    while(num>0){
        ex=num%10;
        while(ex>0){
            fact=fact*ex;
            ex--;
        }
        // printf("\nFact= %d",fact);
        num=num/10;
        factorial+=fact;
        fact=1;
    }
    if(copy==factorial){
        printf("\nStrong number");
    }else{
        printf("\nNot a Strong number");
    }
}