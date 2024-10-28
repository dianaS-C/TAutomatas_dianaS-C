#include <stdio.h>
#include <stdlib.h>

int main(){
	int tam1,tam2, i ,j , found=0;
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
	//Complemento
	printf("\nComplemento: { ");
	for(i=0;i<tam2;i++){
		found=0;
		for(j=0;j<tam1 && found==0;j++){
			if(l2[i]==l1[j]){
				found=1;
			}
		}
		if (found == 0) {  // Si no se encontró el número en a1
			printf("%i ", l2[i]);
		}
	}
	printf("...}");
	return 0;
}


