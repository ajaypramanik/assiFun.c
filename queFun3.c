//Write a function to check whether a given number is Prime or not. (TSRS)


#include<stdio.h>

int num();
int main() {
    int a,r;
    printf("enter a num :");
    scanf("%d",&a);

    r=num(a);
    if(r==1)
    printf("num is prime");
    
    else
    printf("not prime");

    return 0;
}

int num(int a) {
    int i;
    for(i=2;i<=a-1;i++) {
    if(a%i==0){
       // break;
       return 0;
       break;
    }
    
    //    if(i==a);
    //    return 1;
           

    
    }
    // if(i==a);
       return 1;
     
}