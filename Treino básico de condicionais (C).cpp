#include <stdio.h>
#include <locale.h>

using namespace std;
int n,r;

int main()

{
setlocale(LC_ALL,"Portuguese");
	printf("\n Digite um n�mero:");
	scanf("%d",&n);
	
	r=n%2;
	
	if(r==0)
	{ printf("\n Esse n�mero � par");}
		
	else 
	{printf("\n Esse n�mero � �mpar");}
	
}

