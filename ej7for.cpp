#include<stdio.h>
//Programa, que al recibir como datos N numeros enteros, obtiene la suma de los enteros positivos

main(){
	
	int i, n, num, sum;
	sum=0;
	
	printf("ingrese el numero de datos:\t");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		printf("\nIngrese del dato numero %d:\t", i);
		scanf("%d", &num);
		
		if(num>0){
			sum=sum+num;
		}
	}
	
	printf("\nLa suma de los numeros positivos es:\t%d", sum);
}
