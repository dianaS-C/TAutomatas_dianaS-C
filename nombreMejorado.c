#include <stdio.h>
#include <string.h>

void e0(char* nombre);
void e1(char* nombre);
void e2(char* nombre);
void e3(char* nombre);
void e4(char* nombre);
void e5(char* nombre);
int main(){
	char nombre[6]="";
	e0(nombre);
	return 0;
}

void e0(char* nombre){
    strcat(nombre,"D");
    e1( nombre);
 }

void e1(char* nombre){
     strcat(nombre,"i");
    e2( nombre);
}
void  e2(char* nombre){
    strcat(nombre,"a");
    e3( nombre);
}

void e3(char* nombre){
    strcat(nombre,"n");
    e4( nombre);   
}
void e4(char* nombre){
    strcat(nombre,"a");
    e5( nombre);   
}
void e5(char* nombre){
    printf("\n%s\n",nombre);
}

