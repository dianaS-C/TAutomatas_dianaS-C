
#include <stdio.h>

int main(){
	int i;
	int L1[]={1,3,5,7};
	int L2[]={1,2,3,4,5,6,7,8};
	printf("ALfabeto 1\n{");
	for(i=0;i<4;i++){//imprime los conjuntos
		if(L1[i]==7){
			printf("%i} ", L1[i]);
		}else{
			printf("%i, ", L1[i]);
		}
	}
	printf("\nALfabeto 2\n");
		for(i=0;i<8;i++){//imprime los conjuntos
			if(i==0){
				printf("{%i ", L2[i]);
			}else{
				if(L2[i]==8){
					printf("%i}\n", L2[i]);
				}else{
					printf("%i, ", L2[i]);
				}
			}
		}
		printf("\n");
	
	//interseccion
	printf("Interseccion\n{");
	for(i=0;i<4;i++){
		if(L1[i]==7){
			printf("%i} ", L1[i]);
		}else{
			printf("%i, ", L1[i]);
		}
	}	
	return 0;
}

