#include <stdio.h>

int main(void) {
  printf("Hello World\n");
  int i, n, firstDay;
  printf("How mant days in the month?\n");
  scanf("%d", &n);
  printf("Which is the first day of the month?");
  scanf("%d", &firstDay);
  printf("M\tT\tW\tT\tF\tS\tS\n");
  for(i=0; i<firstDay; i++) printf("\t");
  for(i=1; i<=n; i++)
  {
    printf("%d\t", i);
    if((i-(7-firstDay))%7==0) printf("\n");
  }
  return 0;
}

