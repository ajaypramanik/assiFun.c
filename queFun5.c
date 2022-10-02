//5. Write a function to print first N prime numbers (TSRN)


#include<stdio.h>

void num();
int main() {
    int n,N,r;
   printf("enter a num :");
   scanf("%d",&N);

    num(N);
   // printf("next prime no is %d",r);
    return 0;
}

void num(int N) {
int i, x=2;
 while(N)
  {   
    for(i=2;i<x;i++) {
        if(x%i==0)
         break;
    }
    
    

         if(x==i){
    printf("%d\t",x);

         
    N--;
         }
         
   x++;

    

   }

}
   