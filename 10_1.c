#include <stdio.h>
int main()
{
	int n;
	float v1,v2,v3,v4,v5, media;
	scanf("%d",&n);
	scanf("%f%f%f%f%f",&v1,&v2,&v3,&v4,&v5);
	media = (v1+v2+v3+v4+v5)/5;
	printf("%.2f\n",media);
	printf("%f\n%f\n%f\n%f\n%f\n",v1,v2,v3,v4,v5);
	return 0;
}