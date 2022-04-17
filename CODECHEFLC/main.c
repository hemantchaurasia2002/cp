#include <stdio.h>

int main(void) {

  int a,b,c,d,e,sum=0;
  float per;
  printf("Enter the marks of student : \n");
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &d);
  scanf("%d", &e);
  sum=sum+a+b+c+d+e;
  printf("\nSum of marks of student : %d", sum);
  per=(float)sum/500;
  per=(float)per*100;
  printf("\nPercentage of marks of student : %.2f", per);
}