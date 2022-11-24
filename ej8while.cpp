#include<stdio.h>

main (){
	
	
	float pag, spa=0;
	
	printf("Ingresa el primer pago:\n");
	scanf("%f", &pag);
	
	while(pag!=0){
		
		spa=spa+pag;
		printf("\nIngrese el siguente pago:\n");
		scanf("%f", &pag);
	}
	
	printf("\nTotal de pagos del mes:\t%4.2f", spa);
	
}
