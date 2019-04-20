  int n, lastDigit, secondlastDigit, firstDigit, secondDigit;
  scanf("%d", &n);
  lastDigit=n % 10;
  secondlastDigit=(n/10)%10;
  secondDigit=(n/100)%10;
  firstDigit=n/1000;
  if(lastDigit==0||lastDigit==2||lastDigit==4||lastDigit==6||lastDigit==8)
    printf("Divisible by 2");
  else if(firstDigit+secondDigit+secondlastDigit+lastDigit % 3 == 0)
    printf("Divisible by 3");
  if((n%100)%4==0)
    printf("Divisible by 4");
  if(firstDigit+secondDigit+secondlastDigit+lastDigit % 3 == 0 && (n%100)%4==0)
    printf("Divisible by 12");
