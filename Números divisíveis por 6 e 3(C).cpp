#include<stdio.h>
#include<math.h>
#include<locale.h>

using namespace std;
	int n;


int main()

{
setlocale(LC_ALL,"Portuguese");

	printf("\tDigite um número inteiro:");
	scanf ("%i", &n);
	
		if(((n % 6 )==0) && ((n % 3)==0))
			{	
			printf("\tEsse número é divisível por 6. ");
			}
		
		else{
			printf("\tEsse número é divisível por 3. "); 
			}
}
