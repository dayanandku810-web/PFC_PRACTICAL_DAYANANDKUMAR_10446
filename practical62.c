#include<stdio.h>
int main(){
    int sum=0;
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            continue;
        }
        sum=sum+i;
    }
    printf("sum of even numbers=%d",sum);
    return 0;
}