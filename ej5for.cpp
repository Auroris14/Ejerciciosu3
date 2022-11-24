#include<stdio.h>

int main(){
	
	int row,column, SIZE=5;
	
	for(row=1;row<=SIZE;row++){
		
		for(column=1; column<=SIZE; column++){
			printf("*");
		}
		printf("\n");
	}
}
