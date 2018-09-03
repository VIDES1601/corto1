#include<stdio.h>

int main (void){
int cine[5][5];
int opcion, fila,columna;
double total=0;
//juestra el menu
do{
	printf("bienvenido al cine de la u");
	 printf("1- seleciones la posicio0n en la q desea el asiento");
	
	 printf("2- mostrar ganancias");
	 
	 printf("0 salir");
	 
	 scanf("%d",&opcion);
	 
}while(opcion >0 || opcion <2 );
  
  
//selecciona el asiento
if(opcion==1){
printf("ingrese la posicion como fila");
scanf("%d",&fila);

printf("ingrese la columna ");
scanf("%d",&columna);

//verifica si ya se3 lleno
if(cine[fila][columna]!=0){
	printf("ya se vendio ;v");
}

//ase la compra		
if(cine[fila][columna]==0){
	printf("comprado con exito");
	
	//el de 5 dolares
	if(fila==0 && columna>=0 && columna<5){
	total=total+5;
}	

//el de 3.50
if(fila>=1 && fila<=3){

total=total+3.50;
	
}

//el de 2.50
if(fila==4){
	total=total+2.50;
}
	
}
}
}
