#include<stdio.h>
void main(){
   int num;
   int ex,fact;
   fact=1;
   printf("Enter any number: ");
   scanf("%d",&num);
   while(num>0){
    fact*=num;
   num--;
   }
   printf("Factorial = %d",fact);
    
}