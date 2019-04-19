int n1, n2, n3, n4, n5, largest, sec_largest;
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    if(n1>n2)
    {
        largest=n1;
        sec_largest=n2;
    }
    else
    {
        largest=n2;
        sec_largest=n1;
    }
    if(n3>largest)
    {
        sec_largest=largest;
        largest=n3;
    }
    else if(n3>sec_largest)
    {
        sec_largest=n3;
    }
    if(n4>largest)
    {
        sec_largest=largest;
        largest=n4;
    }
    else if(n4>sec_largest)
    {
        sec_largest=n4;
    }
    if(n5>largest)
    {
        sec_largest=largest;
        largest=n5;
    }
    else if(n5>sec_largest)
    {
        sec_largest=n5;
    }
    printf("%d", sec_largest);
