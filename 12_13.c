void exemplo2()
{
 	int firstvalue, secondvalue;
 	int * mypointer;
 	mypointer = &firstvalue;
 	*mypointer = 10;
 	mypointer = &secondvalue;
 	*mypointer = 20;
 	printf("%d\n", firstvalue);
	printf("%d\n", secondvalue);
}