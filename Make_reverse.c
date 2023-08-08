#include<stdio.h>
void main(){
    int num;
    int rem=0;
    int ex=0;
    printf("\nEnter any number : ");
    scanf("%d",&num);
    while(num>0){
        ex=num%10;
        rem=rem*10+ex;
        num=num/10;
    }
    printf("Reverse : %d",rem);
}