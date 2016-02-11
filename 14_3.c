#include <stdio.h>

int fib(int n)
{
	if (n==0)
	{
		return 0;
	}
	else if (n==1)
	{
		return 1;
	}
	else
	{
		return fib(n-1) + fib(n-2);
	}
}

int main()
{
	int x;
	scanf("%d",&x);
	printf("O número da posição %d da sequência é: %d\n",x,fib(x));
	return 0;
}