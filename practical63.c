//writing a c program to ATM PIN authentication with 3 attempts
#include<stdio.h>
int main(){
    int pin;
    int attempts=3;
    int correct_pin=1234;
    while(attempts>0){
        printf("entre your pin:\n");
        scanf("%d",&pin);
        if(pin==correct_pin){
            printf("acces granted\n");
            break;
        }
        else{
            printf("incoorect pin\n");
            attempts--;
        }

    }
    if(attempts==0){
        printf("invalid attempts.your accounts is locked\n");
    }
    return 0;
}