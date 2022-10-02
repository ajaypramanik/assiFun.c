// Write a program in C to find the square of any number using the function

#include<stdio.h>

void num();

int main() {
    int n;
   printf("enter a number :");
   scanf("%d",&n);

    num(n);
   
    return 0;
}

void num(int n) {

    
    printf("square is %d",n*n);

}
