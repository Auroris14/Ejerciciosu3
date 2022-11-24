//entrada de datos numericos centinela-1
#include<stdio.h>


main(){
	
	const int centinela=-1;
	int nota;
	int cuenta=0;
	printf("Introduzca primera nota:\n");
	scanf("%d", &nota);
	
	while(nota!=centinela){
		cuenta++;
		printf("\nIntroduzca siguiente nota:\t(si desea terminar ingrese -1)\n");
		scanf("%d", &nota);
	}
	puts("\n****Final****");
}

