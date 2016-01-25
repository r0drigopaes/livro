/*
Huxley 564 - Rodrigo Paes
*/
#include<stdio.h>

int main()
{
	float v_via, v_veiculo, diferenca;
	float multa = 0;
	int pontos = 0;
	scanf("%f%f", &v_via, &v_veiculo);
	/*
		Percentual em que a velocidade
		do veículo ultrapassou a máxima.
	*/
	diferenca = v_veiculo / v_via;	

	if (diferenca > 1)
	{
		if (diferenca <= 1.2)
		{
			multa = 85.13;
			pontos = 4;
		}
		else if (diferenca <= 1.5)
		{
			multa = 127.69;
			pontos = 5;
		}
		else
		{
			multa = 574.62;
			pontos = 7;
		}
	}
	
	printf("%.2f\n%d\n", multa, pontos);

	return 0;
}