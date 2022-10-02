// 6. Write a function to print all Prime numbers between two given numbers. (TSRN)

#include<stdio.h>

void num();
int main() {
    int a,b;
   printf("enter the range number :");
   scanf("%d%d",&a,&b);

    num(a,b);
   
    return 0;
}

void num(int a,int b) {
int i,j;
 for(i=a;i<b;i++)
 {  
    for(j=2;j<b;j++){
        if(i%j==0)
        break;
    }
    if(j==i)
     printf("%d\t",i);
 }
}
