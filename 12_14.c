void exemplo3()
{
	int firstvalue = 5, secondvalue = 15;
	int * p1, * p2;

	p1 = &firstvalue;
	p2 = &secondvalue;
	*p1 = 10;
	*p2 = *p1;
	p1 = p2;
	*p1 = 20;

	printf("%d\n",firstvalue);
	printf("%d\n",secondvalue);
}