#include <stdio.h>

int main(){

    int n,sum=0,i=0;
    printf("enter the number till which the sum has to be found:" );
    scanf("%d",&n);

    while(i<=n){
        sum=sum+i;
        i++;4
        
    }

printf("the sum of first %d natural number is %d",n,sum);
return 0;

}