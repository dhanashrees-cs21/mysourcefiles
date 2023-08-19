#include <stdio.h>
int add(int a,int b) {
     if(b==0) {
       return a;
    }  else {
      return add(a,b-1)+1;
    }
}
int main() {
    int a,b;
    printf("ADD TWO NUMBERS USING RECURTION\n");
    printf("Enter the first number:\n");
    scanf("%d",&a);
    printf("Enter the second number:\n");
    scanf("%d",&b);
    printf("%d+%d=%d\n",a,b,add(a,b));

}

