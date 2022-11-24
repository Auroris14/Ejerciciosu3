//bucle infinito
#include<stdio.h>
#define CLAVE -999

int main(){
	
	int num;
	
	for(;;){
		
		printf("Introduzca un numero\t -Introduzca \"-999\" para terminar-\n");
		scanf("%d", &num);
		
		if(num==CLAVE){
			
			break;
		}
	}
	
	return 0;
}
