#include <stdio.h>
#include <locale.h>

using namespace std;
	float n1,n2,soma,sub,mult,div;
	
int main()

{
setlocale (LC_ALL,"Portuguese");

	printf("Digite os n�meros:  ");
	scanf ("%f%f", &n1, &n2);
	
		soma= n1+n2;
		sub= n1-n2;
		mult= n1*n2;
		div= n1/n2;
	
	printf("\n O valor da soma: %f", soma);
	printf("\n O valor da subtra��o: %f", sub);
	printf("\n O valor da multiplica��o: %f", mult);
	printf("\n O valor da divis�o: %f", div);	
}
		
