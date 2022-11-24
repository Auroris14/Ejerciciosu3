#include<stdio.h>

main(){
	int i = 0;
	float pro, sal, nom=0;
	printf("Ingrese el salario del profesor:\t");
	scanf("%f", &sal);
	
	do{
		
		nom=nom+sal;
		i++;
		printf("Ingrese el salario del profesor:\t");
		scanf("%f", &sal);
	}while(sal);
	
	pro=nom/i;
	printf("\nNomina: %.2f\t Promedio del salarios: %.2f",nom,pro);
	
}
