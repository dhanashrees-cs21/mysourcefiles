#include<stdio.h>
int fact(int n) { 
      if(n==0||n==1) {
        return 1;
      } else {
        return fact(n-1)*n;
      }
}
int main() {
     int n,i ;
     printf("Enter the number:");
     scanf("%d",&n);
     i=fact(n);
     printf("%d",i);
}
