#include<stdio.h>

int main() {
  int a,b;
  a=10;
  b=20;
  swap(&a,&b);
  printf("a=%d,b=%d\n",a,b);
  return 0:
}
void swap(int p1,int *p2) {
   t=*p1;
  *p1=*p2;
  *p2=t;
}
