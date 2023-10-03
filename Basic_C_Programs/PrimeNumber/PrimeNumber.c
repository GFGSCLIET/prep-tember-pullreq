#include<stdio.h>
#include<stdbool.h>

bool isPrime(int n){
    if(n<=1) return false;
    if(n==2 || n==3) return true;
    if(n%2==0 || n%3==0) return false;
    for(int i=5;i*i<=n;i+=6)
        if(n%i==0 || n%(i+2)==0) return false;
    return true;
}

int main(){
    int n;
    printf("Enter the Number: ");
    scanf("%d",&n);
    if(isPrime(n)) printf("%d is a Prime",n);
    else printf("%d is not a Prime",n);
    return 0;
}