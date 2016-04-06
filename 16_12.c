void uso_heap()
{
	int *a = (int *) malloc (sizeof(int));
	*a = 5;
	printf("%d\n", *a);
	free(a);
}