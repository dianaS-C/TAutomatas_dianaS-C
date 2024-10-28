#include <stdio.h>

int main(){
	int a1[]={1,3,5,7};
	int a2[]={1,2,3,4,5,6,7,8};
	int i, j, found=0;
	printf("Alfabeto 1:\n{");
	for(i=0;i<4;i++){
		if(a1[i]==7){
			printf("%i}", a1[i]);
		}else{
			printf("%i, ", a1[i]);
		}
	}
	printf("\nAlfabeto 2:\n{");
	for(i=0;i<8;i++){
		if(a2[i]==8){
			printf("%i}", a2[i]);
		}else{
			printf("%i, ", a2[i]);
		}
	}
	//Diferencia
	printf("\nDiferencia:\n{ ");
	for(i=0;i<4;i++){
		found=0;
		for(j=0;j<8;j++){
			if(a1[i]==a2[j]){
				found=1;
			}
		}
		if(found!=1){
			printf("%i ", a1[i]);
		}
		
	}
	printf("}");
	return 0;
}

