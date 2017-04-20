#include <stdio.h>
#include <string.h>

/*
Inverte os caracteres de uma string recursivamente.
*/
void reverse(char *s, int len)
{

    if (len > 1 )
    {
        // troca o primeiro caractere com o último
        char c = s[len-1];
        s[len-1] = s[0];
        s[0] = c;
        
        /* muda o ponteiro do início do array para uma posição
         posterior e diminui o tamanho de 2, pois já trocamos
         dois posições
         */
        reverse(&s[1], len -2);
    }
}

/*
São dois blocos de tamanho len_a e len_b. Por exemplo, se a entrada for
abcdef e os tamanhos forem 2 e 4, então significa que o primeiro bloco é:
ab e o segundo cdef.
logo a resposta seria:
cdefab

Para usar a função anterior, a ideia foi:
1- inverter tudo:
abcdef --> fedcba

2- Com isso o segundo bloco foi pro começo. Então para ficar certo, inverte
o segundo bloco:
fedcba -- > cdefba

3- Agora fica faltando somente inverter o último bloco. Nesse caso, basta
usar os ponteiros para dizer onde começa o segundo bloco
cdefba --> cdefab
*/
void reverse_mem(char *s, int len_a, int len_b)
{
    reverse(s, len_a + len_b);
    reverse( s, len_b);
    reverse( &s[len_b], len_a);
    
}

int main(void) 
{
    char str[] = "abcde";
    reverse_mem(str, 2, 3); // resposta esperada: cdeab
    //r(str, strlen(str));
    
    printf("%s\n", str);
	
	return 0;
}
