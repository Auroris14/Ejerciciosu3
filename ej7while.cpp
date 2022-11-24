//la sentencia break en los bucles
#include<stdio.h>

int main(){
	
	int clave=-9;
	int entrada;
	
	printf("ingresa un valor de entrada\n");
	while (scanf("%d",&entrada)){
		
		if(entrada!=clave){
			printf("%d es diferente de -9\n", entrada);
			printf("\ningresa otro valor de entrada\n");
		}else{
			printf("%d es igual que -9\n. Bai bai", entrada);
			break;
		}
	}
}
