#include <stdio.h>

void concatenacion(int A[],int tamA, int U[], int tamU);
int main(){
    printf("L1={1,3,5,7}\nL2={1,2,3,4,5,6,7,8}\n");
	int A[]={1,3,5,7};
	int U[]={1,2,3,4,5,6,7,8};
	int tamA=sizeof(A)/ sizeof(A[0]);
	int tamU=sizeof(U)/ sizeof(U[0]);
	printf("Concatenacion\n");
	concatenacion(A, tamA, U, tamU);
	
	return 0;
}

void concatenacion(int A[],int tamA, int U[], int tamU){
	int i,j;
	printf("{");
	for(i=0;i<tamA;i++){
		for(j=0;j<tamU;j++){
			printf("%d%d",A[i],U[j]);
			if(i<tamA -1||j<tamU-1){
                printf(", ");
             }
         }
    }  
    printf("}");         
}


