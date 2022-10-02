//1. Write a function to calculate LCM of two numbers. (TSRS)

#include<stdio.h>
int LCM();
int main() {
    int a,b,lcm;
    printf("enter two num :");
    scanf("%d%d",&a,&b);

    lcm=LCM(a,b);
    printf("lcm is :%d", lcm);
    return 0;
}

int LCM(int a,int b) {
    int i;
    for(i=1;i<=a*b;i++){
    if((i%a==0) && (i%b==0))
           return i;

    }
}