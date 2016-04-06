int *p;
p = (int *) malloc (sizeof(int));
*p = 5;
scanf("%d", p);
printf("%d\n", *p);