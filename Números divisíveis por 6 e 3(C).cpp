#include<stdio.h>
#include<math.h>
#include<locale.h>

using namespace std;
	int n;


int main()

{
setlocale(LC_ALL,"Portuguese");

	printf("\tDigite um n�mero inteiro:");
	scanf ("%i", &n);
	
		if(((n % 6 )==0) && ((n % 3)==0))
			{	
			printf("\tEsse n�mero � divis�vel por 6. ");
			}
		
		else{
			printf("\tEsse n�mero � divis�vel por 3. "); 
			}
}
