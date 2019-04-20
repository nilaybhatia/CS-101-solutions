#include <stdio.h>

int main(void) {
  printf("Hello World\n");
  int n;
  double x0, nextGuess;
  char c;
  printf("Enter an integer");
  scanf("%d", &n);
  printf("Make a guess. Press Enter to continue and -1 to stop");
  scanf("%lf", &x0);
  do
  {
  nextGuess=(x0+n/x0)/2.0;
  printf("Guess=%lf\tIt's square=%lf", nextGuess, nextGuess*nextGuess);
  x0=nextGuess;
  scanf("%c", &c);
  }while(c=='\n');
  return 0;
}
