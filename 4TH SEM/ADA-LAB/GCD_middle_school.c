  
#include <stdio.h>


int gcd(int a,int b){
  
  int r=0;
  if((a==0)||(b==0))
    return r;
  else{
    int i;
    for(i=1;i<=a && i<=b;i++){
      if((a%i==0) &&(b%i==0))
        r=i;
    }
    return r;
  }
}


int main(void) {
  int m,n;
  printf("Enter values of m&n");
  scanf("%d %d",&m,&n);
  printf("GCD is %d",gcd(m,n));
  return 0;
}
