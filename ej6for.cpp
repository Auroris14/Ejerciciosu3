#include<stdio.h>

int main(){
	
	float sal, nom;
	nom=0;
	
	for(int i=1; i<=15; i++){
		printf("Ingrese el salario del profesor %d:\t", i);
		scanf("%f", &sal);
		nom=nom+sal;
	}
	
	printf("\nEl total de la nomina es: %.2f", nom);
	
}
