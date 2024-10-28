#include <stdio.h>
void e0();
void e1();

int main(){
	int valor;
	printf("por favor introduce 1 si quieres encender el foco \n");
    scanf("%d", &valor);
	while(valor==1){
	  	e0();
 }
	return 0;
}

void e0(){
	int interruptor;
	printf("encendido\n");
	printf("Si deseas apagar el foco introduce 0 \n");
	scanf("%d", &interruptor);
	if(interruptor==0){
		     e1();
	}else if(interruptor != 0 && interruptor != 1) {
        printf("Error: Valor no válido. Solo se aceptan 0 o 1.\n");
        e0(); 
    }
		   
}	

void e1(){
   int interruptor;
   printf("apagado\n");
   printf("Si deseas encender el foco introduce 1 \n");
	scanf("%d", &interruptor);
	if(interruptor==1){
		     e0();
   }else if(interruptor != 0 && interruptor != 1) {
		   printf("Error: Valor no válido. Solo se aceptan 0 o 1.\n");
        e1();	
		   
   }
}	
