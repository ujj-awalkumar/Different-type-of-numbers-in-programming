/*
Automorphic number
=> A number is called an Automorphic number if and only if its square ends in the same digits as the number itself.

Input  : N = 76 
Output : Automorphic
Explanation: As 76*76 = 5776

*/

#include <stdio.h>
int main()
{
    int num,count,ex=0,rem=0,i,numb;
    count=0;
    printf("Enter any number :- ");
    scanf("%d",&num);
    numb=num; //Here we are copying the value that user have given as input in another variable for preserving the original number, because we have to perform multiple operation on that num.

    while(num>0){ //This while loop is couting the digit of the number, that user have given
     num=num/10;
     count++;
    }
    num=numb; // Here we are using that variable we have used to store the original value to reassign the original value in the num
    num=num*num; // we are squaring the function (automorphic)
    
    for(i=1;i<=count;i++){ // here we are taking the use of count variable that we have performed operation on, the loop will execute == till number of digits in the given input
        ex=num%10;
        rem=rem*10+ex;
        num=num/10;
        
    }//basically this loop will extract the digit of the square depending on the length of the given input and store in the reverse form
    
    num=rem;
    rem=0;
    while(num>0){ //this will correct the reversed number in its correct form
        ex=num%10;
        rem=rem*10+ex;
        num=num/10;
    }
    
    if(numb==rem){
        printf("Automorphic number");
    }else{
        printf("Not an automorphic number");
    }
   
}