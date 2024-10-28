#include <stdio.h>
#include <stdlib.h>

int main(){
	int tam1,tam2, i ,j , encontrado=0;
	int *l1, *l2; 
	printf("Longitud de los lenguajes: \n");
	scanf("%i %i", &tam1, &tam2);
	l1=(int*)malloc(tam1*sizeof(int));
	l2=(int*)malloc(tam2*sizeof(int));
	printf("Indica los %i elementos del lenguaje 1: ", tam1);
	for(i=0;i<tam1;i++){
		scanf("%i", &l1[i]);
	}
	printf("Indica los %i elementos del lenguaje 2: ", tam2);
	for(i=0;i<tam2;i++){
		scanf("%i", &l2[i]);
	}
	printf("\nLenguaje 1: { ");
	for(i=0;i<tam1;i++){
		if(i==tam1-1){
			printf("%i }", l1[i]);
		}else{	
			printf("%i, ", l1[i]);
		}
	}
	printf("\nLenguaje 2: { ");
	for(i=0;i<tam2;i++){
		if(i==tam2-1){
			printf("%i }", l2[i]);
		}else{	
			printf("%i, ", l2[i]);
		}
	}
	printf("\n\nInterseccion: {");
	for(i=0;i<tam1;i++){
		encontrado=0;
		for(j=0;j<tam2 && !encontrado;j++){
			if(l1[i]==l2[j]){
				encontrado=1;
			}
		}
		if(encontrado){
			printf(" %i ", l1[i]);
		}
	}
	printf("}");
	return 0;
}
