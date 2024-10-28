#include <stdio.h>
#include <stdlib.h>

int main(){
	int tam1,tam2, i ,j , opcion, encontrado=0, again=1, found=0; ;
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
	printf("\nPropiedades de lenguaje:\n1.-Union\n2.-Interseccion\n3.-Complemento\n4.-Diferencia\n5.-Producto cartesiano\n6.-Concatenacion\n\n");
	printf("Lenguaje 1: { ");
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
	printf("\n");
	while(again){
		printf("\nPropiedad de lenguaje a aplicar:  ");
		scanf("%i", &opcion);
		switch(opcion){
			case 1:										//---> Union <---
				printf("\nUnion: {");
				for(i=0;i<tam1;i++){
					printf(" %i ", l1[i]);
				}
				for(i=0;i<tam2;i++){
					encontrado=0;
					for(j=0;j<tam1 && !encontrado;j++){
						if(l2[i]==l1[j]){
							encontrado=1;
						}
					}
					if(!encontrado){
						printf(" %i ", l2[i]);
					}
				}
				printf("}");
				break;
			case 2:										//---> Intersección <---
				printf("\nInterseccion: {");
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
				break;
			case 3:										//---> Complemento <---
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
				break;
			case 4:										//---> Diferencia <---
				printf("\nDiferencia Lenguaje 1 - Lenguaje 2: { ");
					for(i=0;i<tam1;i++){
						found=0;
						for(j=0;j<tam2;j++){
							if(l1[i]==l2[j]){
								found=1;
							}
						}
						if(found!=1){
							printf("%i ", l1[i]);	
						}
					}
					printf("}");
				break;
			case 5:										//---> Producto Cartesiano <---
				printf("\nProducto Cartesiano: { ");
				for(i=0;i<tam1;i++){
					for(j=0;j<tam2;j++){
						printf("(%d,%d) ",l1[i],l2[j]);
					}
				}
				printf("}");
				break;
			case 6:										//---> Concatenacion <---
				printf("\nConcatenacion: { ");
				for(i=0;i<tam1;i++){
					for(j=0;j<tam2;j++){
						printf("%d%d ",l1[i],l2[j]);
					}
				}  
				printf("}");
				break;
			default:
				break;
		}
		printf("\n\nCONTINUAR SI=1 NO=0  ");
		scanf("%i", &again);
	}
	return 0;
}
