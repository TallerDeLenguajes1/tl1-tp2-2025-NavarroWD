
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct  { 
int velocidad; // Velocidad de procesamiento en GHz (valor entre 1 y 3) 
int anio;     // Año de fabricación (valor entre 2015 y 2024) 
int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8) 
char *tipo_cpu;     // Tipo de procesador (apuntador a cadena de caracteres) 
}typedef compu;

void listarPCs(compu pcs[], int cantidad); 
void mostrarMasVieja(compu pcs[], int cantidad);
void mostrarMasVeloz(compu pcs[], int cantidad); 

int main(){
srand(time(NULL));




return 0;
}