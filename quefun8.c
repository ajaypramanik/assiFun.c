// Write a function to print PASCAL Triangle. (TSRN)

#include<stdio.h>

int fact();
int comb();
void p_triangle();
int main() {
    int n;
   printf("enter the range number :");
   scanf("%d",&n);

    p_triangle(n);
   
    return 0;
}

void p_triangle(int n) {
int i,j;
 for(i=0;i<+n;i++)
 {  
   for(j=0;j<=i;j++){
    // k=comb(i,j);
    printf("%d\t",comb(i,j));
    // printf("\n");
   }
    printf("\n");

 }
}

int fact(int n) {
   int  fact =1,i;
   for(i=1;i<=n;i++)
      fact =fact*i;
      return fact;
}

int comb(int n,int r) {
    return fact(n)/(fact(r)*fact(n-r));
}
