#include<stdio.h>
/*Examen evaluacion 3  Alvarez Rodriguez America Aurora 218870

Programa que al recibir un como dato un numero entero N, calcule el factorial
de dicho numero.
*/

int main (){
	
	int num, fac, i;
	
	printf("Ingrese un numero entero positivo:\t");
	scanf("%d", &num);
	
	if(num>=0){
	
		fac=1;
		
		for(i=1;i<=num; i++){
	
			fac=fac*i;
		}
		
		printf("\n%d! = %d\n", num, fac);
	}else{
		
		printf("\n****Error en el dato :c ****\n");
	}
}
