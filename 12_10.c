if (x > y || x > z)
{
	if (y < z)
	{
		// y é o menor de todos
		troca(&x,&y);
	}
	else
	{
		// z é o menor de todos
		troca(&x,&z);
	}
}