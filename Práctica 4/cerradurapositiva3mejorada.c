#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define maxCombinaciones 100 //un valor máximo para evitar ciclos infinitos

int sonIguales(char combinacion1[][4], int longitud1,char combinacion2[][4], int longitud2);
int esUnica(char combinaciones[][10][4], int longitudes[], char nuevaCombinacion[][4],int longitudNueva, int totalGeneradas);

int main(){
    int numDeCombinaciones;
    srand(time(NULL));
    
    printf("¿Cuántas combinaciones numéricas quieres ver?: ");
    scanf("%d", &numDeCombinaciones);
    
  
    
    // Aquí se almacenan las combinaciones generadas
    char combinaciones[maxCombinaciones][10][4]; //el 10 indica que cada combinación puede tener max. 10 numeros
    int longitudes[maxCombinaciones];//se guarda la longitud de cada combinacion
    int totalGeneradas=0,longitudDeCombinaciones,i;
    char  nuevaComb[10][4];
    
    // Aquí se generan las combinaciones 
    while(totalGeneradas < numDeCombinaciones){
        longitudDeCombinaciones=(rand()%10)+1; // Longitud aleatoria entre 1 y 10
        // Generar una nueva combinación aleatoria
        for(i=0;i<longitudDeCombinaciones;i++){
          // Asignar aleatoriamente "1a" o "2b"
            if (rand()%2==0) {
                strcpy(nuevaComb[i], "1a"); // Copia "1a" en el arreglo
            }else{
                strcpy(nuevaComb[i], "2b"); // Copia "2b" en el arreglo
            }
        }
        
        // Verificar si la combinación es única
        if(esUnica(combinaciones, longitudes, nuevaComb, longitudDeCombinaciones, totalGeneradas)){
            // Si es única, la almacenamos
            for(i=0;i<longitudDeCombinaciones;i++){
                strcpy(combinaciones[totalGeneradas][i], nuevaComb[i]);
            }
            longitudes[totalGeneradas]=longitudDeCombinaciones;
            totalGeneradas++;

            // Mostrar la combinación generada
            printf("Combinación de longitud %d: \n", longitudDeCombinaciones);
            for (i=0;i<longitudDeCombinaciones;i++) {
                printf("%s ", nuevaComb[i]);
            }
            printf("\n");
        }
    }

    return 0;
}

// Función para verificar si dos combinaciones son iguales
int sonIguales(char combinacion1[][4], int longitud1,char combinacion2[][4], int longitud2){
	int i;
	if(longitud1!=longitud2){
		return 0; //esto me indica que seran de distintas longitudes
	}	
    for(i=0;i<longitud1;i++) {
        if(strcmp(combinacion1[i], combinacion2[i])!=0){
            return 0; // Indica que son diferentes
        }
    }
    return 1; // Indica que las combinaciones son iguales
} 

// Función para verificar si la nueva combinación ya ha sido generada
int esUnica(char combinaciones[][10][4], int longitudes[], char nuevaCombinacion[][4],int longitudNueva, int totalGeneradas){
	int i;
    for(i=0;i<totalGeneradas;i++){
        if(sonIguales(combinaciones[i], longitudes[i], nuevaCombinacion, longitudNueva)){
            return 0; // La combinación no es única
        }
    }
    return 1; // La combinación es única
}
