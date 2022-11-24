//
#include<stdio.h>

main(){
	
	char opcion;
	
	do{
		puts("hola");
		puts("Desea otro tipo de saludo?");
		puts("Pulse s para si y n para no");
		printf("y a continuacion pulse intro:\t");
		scanf("\n%c", &opcion);	
	}while((opcion=='s') || (opcion=='S'));
	
	puts("\nAdios");
	return 0; 
}
