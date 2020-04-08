//Biblíotecas//
#include <locale.h>
#include <stdio.h>



using namespace std;
	float metros,polegadas,pes,jardas,milhas;

//Corpo//
int main()
{
	
setlocale(LC_ALL,"Portuguese");
	
	printf("\n Digite o valor em Metros:\n");
	scanf ("%f",&metros);
	
	polegadas=metros* 39.3701;
	pes=metros* 3.28084;
	jardas=metros*1.09361;
	milhas=metros*0.000621371;
	
	printf("\n O valor em Polegadas: %f",polegadas);
	printf("\n O valor em Pés: %f",pes);
	printf("\n O valor em Jardas: %f",jardas);
	printf("\n O valor em Milhas: %f",milhas);

}
	

