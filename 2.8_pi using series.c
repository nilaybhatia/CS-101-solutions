 int i, n, sign=1;
  printf("How many terms?\n");
  scanf("%d", &n);
  double ans, term;
  for(i=0; i<=n; i++)
  {
    term=1.0/(2*i+1);
    ans = ans + sign * term;
    sign=sign*-1;
  }
  printf("%lf", 4*ans);
