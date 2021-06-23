  
#include <stdio.h>
int min(a,b){
  if(a>b)
    return b;
  else
    return a;

}

int gcd(int a,int b){
  int small=min(a,b);
  while(1){
    if((a%small==0)&& (b%small==0))
      return small;
    small=small-1;
  }
}


int main(void) {
  int m,n;
  printf("Enter values of m&n");
  scanf("%d %d",&m,&n);
  printf("GCD is %d",gcd(m,n));
  return 0;
}
