// Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the
//function.


#include<stdio.h>

int fact();
void sum();


int main() {
   // int n;
  // printf("enter the range number :");
   //scanf("%d",&n);

    sum();
   
    return 0;
}
void sum() {
    int i;
    i=1+1+fact(2)+2+fact(3)+3+fact(4)+4+fact(5)+5;
    printf("%d",i);
}



int fact(int n) {
   int  fact =1,i;
   for(i=1;i<=n;i++)
      fact =fact*i;
      return fact;
}
