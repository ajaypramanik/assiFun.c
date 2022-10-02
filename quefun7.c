// Write a function to print first N terms of Fibonacci series (TSRN)

#include<stdio.h>

void num();
int main() {
    int n;
   printf("enter the range number :");
   scanf("%d",&n);

    num(n);
   
    return 0;
}

void num(int n) {
int i,a=-1,b=1,c=0;
 for(i=1;i<n;i++)
 {  
    c=a+b;
    printf("%d\t",c);
    a=b;
    b=c;
 }
}

