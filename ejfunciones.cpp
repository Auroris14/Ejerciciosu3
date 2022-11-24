#include<stdio.h>
#include<conio.h>
#include<math.h>

/*mostar una tabla con los numeros del 1 al 10 con sus respectivas potencias
raiz cuadrada, cuadrado y cubo*/

void potencias (int n, float*raiz, int*cuad, int*cubo){
	
	*raiz=sqrt(n);
	*cuad=n*n;
	*cubo=pow(n,3);
}

int main(){
	
	int i, cuad, cubo;
	float raiz;
	
	printf("\n\t numero\t raiz cuadrado\t cubo\n");
	for(i=1;i<=10; i++){
		potencias(i, &raiz, &cuad, &cubo);
		printf("\t%6d %6.2f %6d %6d\n", i, raiz, cuad, cubo);
	}
	getch();
	return 0;
}
