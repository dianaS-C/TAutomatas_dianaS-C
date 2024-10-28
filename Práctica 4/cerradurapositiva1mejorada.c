#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define maxCombinaciones 100 //un valor máximo para evitar ciclos infinitos

int sonIguales(int combinacion1[], int longitud1,int combinacion2[], int longitud2);
int esUnica(int combinaciones[][10], int longitudes[], int nuevaCombinacion[],int longitudNueva, int totalGeneradas);

int main(){
    int numDeCombinaciones;
    srand(time(NULL));
    
    printf("¿Cuántas combinaciones numéricas quieres ver?: ");
    scanf("%d", &numDeCombinaciones);
    
    
    // Aquí se almacenan las combinaciones generadas
    int combinaciones[maxCombinaciones][10]; 
    int longitudes[maxCombinaciones];
    int totalGeneradas=0;
    
    // Aquí se generan las combinaciones 
    while(totalGeneradas < numDeCombinaciones){
		int longitudDeCombinaciones, nuevaComb[10], i;
        longitudDeCombinaciones=(rand()%10)+1; 
        // Generar una nueva combinación aleatoria
        for(i=0;i<longitudDeCombinaciones;i++){
            nuevaComb[i]=(rand()%3)+1; // Genera 1, 2 o 3
        }
        
        // Verificar si la combinación es única
        if(esUnica(combinaciones, longitudes, nuevaComb, longitudDeCombinaciones, totalGeneradas)){
            // Si es única, la almacenamos
            for(i=0;i<longitudDeCombinaciones;i++){
                combinaciones[totalGeneradas][i]=nuevaComb[i];
            }
            longitudes[totalGeneradas]=longitudDeCombinaciones;
            totalGeneradas++;

            // Mostrar la combinación generada
            printf("Combinación de longitud %d: \n", longitudDeCombinaciones);
            for(i=0;i<longitudDeCombinaciones;i++){
                printf("%d ", nuevaComb[i]);
            }
            printf("\n");
        }
    }

    return 0;
}

// Función para verificar si dos combinaciones son iguales
int sonIguales(int combinacion1[], int longitud1,int combinacion2[], int longitud2){
	int i;
	if(longitud1!=longitud2){
		return 0; //esto me indica que seran de distintas longitudes
	}	
    for(i=0;i<longitud1; i++) {
        if(combinacion1[i]!=combinacion2[i]) {
            return 0; // Indica que son diferentes
        }
    }
    return 1; // Indica que las combinaciones son iguales
} 

// Función para verificar si la nueva combinación ya ha sido generada
int esUnica(int combinaciones[][10], int longitudes[], int nuevaCombinacion[],int longitudNueva, int totalGeneradas) {
	int i;
    for(i=0;i<totalGeneradas;i++){
        if(sonIguales(combinaciones[i], longitudes[i], nuevaCombinacion, longitudNueva)){
            return 0; // La combinación no es única
        }
    }
    return 1; // La combinación es única
}
