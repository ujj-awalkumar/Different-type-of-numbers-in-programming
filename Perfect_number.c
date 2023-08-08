#include<stdio.h>
int main(){
    int num,i,sum=0;
    printf("Enter any number : ");
    scanf("%d",&num);
   for(i=1;i<=num/2;i++){
    if(num%i==0){
        sum=sum+i;
    }
   }
   if(num==sum){
    printf("Perfect number");
   }else{
    printf("Not a perfect number");
   }
}