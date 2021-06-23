#include <stdio.h>

int gcd(int a,int b){
  int rem;
  
      while(a!=b){
          if(a>b)
            a=a-b;
          else
          b=b-a;
      }
      return a;
      }
int main(void) {
  int m,n;
  printf("Enter values of m&n");
  scanf("%d %d",&m,&n);
  printf("GCD is %d",gcd(m,n));
  return 0;
}


