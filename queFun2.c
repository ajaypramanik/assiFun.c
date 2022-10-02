//2. Write a function to calculate HCF of two numbers. (TSRS)

#include<stdio.h>
int HCF();
int main() {
    int a,b,hcf;
    printf("enter two num :");
    scanf("%d%d",&a,&b);

    hcf=HCF(a,b);
    printf("hcf is :%d", hcf);
    return 0;
}

int HCF(int a,int b) {
    int i,h,k;
    for(i=1;i<=a*b;i++) {
    if((i%a==0) && (i%b==0)){
           // k=i;
        h=(a*b)/i;
        return h;
    }
           

    }
     
}