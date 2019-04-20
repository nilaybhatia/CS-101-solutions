#include <stdio.h>

int main(void) {
  printf("Hello World\n");
  int i, n;
  printf("How mant terms?\n");
  scanf("%d", &n);
  double ans=1;
  long fact=1;
  for(i=1; i<n; i++)
  {
    fact=fact*i;
    if(i%2==0)
      ans=ans+1.0/fact;
    else 
      ans=ans-1.0/fact; 
  }
  printf("%lf", 1.0/ans);
  return 0;
}

