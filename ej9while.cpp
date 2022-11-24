#include<stdio.h>
#include<math.h>

main (){
	
	long cua, suc=0;
	int num;
	
	
	printf("Ingrese un numero positivo:\n");
	scanf("%d", &num);
	
	
	while(num!=0){
		
		if(num>0){
			
		cua=pow(num,2);
		suc=suc+cua;
		
		printf("\n%d al cuadrado es %d\n", num,cua);
		printf("\nIngrese otro numero positivo: \n");
		scanf("%d", &num);
			
		}else{
			
			printf("\nUps. Por favor ingrese un numero positivo:\n");
			scanf("%d", &num);
		}
		
		
	}
	
	printf("\n\nla suma total de los cuadrados es:\t%d", suc);
}
