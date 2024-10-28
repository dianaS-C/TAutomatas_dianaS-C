#include <stdio.h>
#include <stdlib.h>

void concatenacion(int l1[],int tamanio1, int L2[], int tamanio2);

int main(){
	int tamanio1,tamanio2,i,j;
	int *L1,*L2;
	printf("Intrroduce el tamaño que deseas para el L1\n");
	scanf("%d",&tamanio1);
	L1=(int*)malloc(tamanio1*sizeof(int));
	printf("Introduce los %d números:\n", tamanio1);
	for(i=0;i<tamanio1;i++){
		scanf("%d", &L1[i]);
	}
	printf("Intrroduce el tamaño que deseas para el L2\n");
	scanf("%d",&tamanio2);
	L2=(int*)malloc(tamanio2*sizeof(int));
	printf("Introduce los %d números:\n", tamanio2);
	for(j=0;j<tamanio2;j++){
		scanf("%d", &L2[j]);
	}
	printf("Los valores ingresados para L1 son:\nL1={");
	for (i=0;i<tamanio1;i++) {
        printf("%d", L1[i]);
        if(i<tamanio1-1){
			 printf(", ");
		}	 
    }
    printf("}");
    printf("\n");	
    
    printf("Los valores ingresados para L2 son:\nL2={");
	for (j=0;j<tamanio2;j++) {
        printf("%d", L2[j]);
        if(j<tamanio2-1){
			 printf(", ");
		}	 
    }
    printf("}");
    printf("\n");	
    
	printf("Concatenacion\n");
	concatenacion(L1, tamanio1, L2, tamanio2);
	
	return 0;
}

void concatenacion(int L1[],int tamanio1, int L2[], int tamanio2){
	int i,j;
	printf("{");
	for(i=0;i<tamanio1;i++){
		for(j=0;j<tamanio2;j++){
			printf("%d%d",L1[i],L2[j]);
			if(i<tamanio1-1||j<tamanio2-1){
                printf(", ");
             }
         }
    }  
    printf("}");         
}
