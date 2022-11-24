//Bucle para introducir un digito
#include<stdio.h>
main(){
	
	int digito;
	do{
		
		printf("Introduzca un digito\t (0 al 9)\n" );
		scanf("%d", &digito);
	}while((digito<0) || (9<digito));
}
