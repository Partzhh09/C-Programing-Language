#include<stdbool.h>
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    if(n<=1){
        printf("Not a Prime Number\n");
        return 0;
    }

    bool isPrime = true;
    for(int i =2;i*i<=n;i++){
        if(n%i==0){
            isPrime = false;
            break;
        }
    }

    if(isPrime){
        printf("%d is a Prime Number\n",n);
    }else{
        printf("%d is not a Prime Number\n",n);
    }
return 0;
}