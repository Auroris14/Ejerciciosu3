//bucle controlado por bandera
#include<stdio.h>

int main(){
	char car;
	int digito_leido=0;
	
	while(!digito_leido){
		printf("introduzca un caracter:\n");
		scanf("%s", &car);
		digito_leido=(('0'<=car)&&(car<='9'));
	}
}
