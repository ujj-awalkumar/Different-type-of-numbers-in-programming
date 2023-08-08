#include<stdio.h>
int main(){
    int num,ex,rev,i,sum1=1,sum2=1;
    int flag=0;
    printf("Enter any number : ");
    scanf("%d",&num);

    for(i=1;i<=num/2;i++){
        if(num%i==0){
            sum1+=i;
        }
    }if(sum1==2){
        flag++;
    }
    while(num>0){
        ex=num%10;
        rev=rev*10+ex;
        num=num/10;
    }
    for(i=1;i<=rev/2;i++){
        if(rev%i==0){
            sum2=sum2+i;
        }
    }
    if(sum2==2){
        flag++;
    }

    if(flag==2){
        printf("It's a twisted prime number.");
    }else{
        printf("It's not a twisted prime number.");
    }
}