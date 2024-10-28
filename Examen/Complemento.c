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
	//Complemento
	printf("\nComplemento:\n{ ");
	for(i=0;i<8;i++){
		found=0;
		for(j=0;j<4 && found==0;j++){
			if(a2[i]==a1[j]){
				found=1;
			}
		}
		if (found == 0) {  // Si no se encontró el número en a1
            printf("%i ", a2[i]);
        }
	}
	printf("}");
	return 0;
}


