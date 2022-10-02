//4. Write a function to find the next prime number of a given number. (TSRS)
#include<stdio.h>

int num();
int main() {
    int n,r;
    printf("enter a num :");
    scanf("%d",&n);

    r=num(n);
    printf("next prime no is %d",r);
    return 0;
}

int num(int n) {
int count,i;
for(n; 1; n++)
{
    //count=0;
    for(i=2; i<=n-1; i++) {
      if(n%i==0) 
        //count==1;
        break;
      
    
}
 if(i==n) 
    
 return n;
 
}
}