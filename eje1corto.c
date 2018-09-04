#include<stdio.h>
# include<stdlib.h>


int main(){
	
	
	int afil, acol, bfil, bcol, i, j, k;
	int cont=0,primo=0,n=0,aux=0;
  printf("Numero de filas de la matriz  A -->");
  scanf("%d", &afil);
  printf("Numero de columnas de la matriz  A -->");
  scanf("%d", &acol);
  printf("Numero de filas de la matriz B -->");
  scanf("%d", &bfil);
  printf("Numero de columnas de la matriz  B -->");
  scanf("%d", &bcol);
  printf("\n\n");
  printf("\n\n");
  if(acol!=bfil){
             printf("numero de filas de A no son Iguales con las columnas de B\n");
           return 0;
            }
             
  int A[afil][acol], B[bfil][bcol], C[afil][bcol];
  int vector[acol];
  for(i=0;i<afil;i++){
      for(j=0;j<acol;j++){
          printf("Escribe el valor de la matriz A (%d, %d):",i+1, j+1);
          scanf("%d", &A[i][j]);
      }
  }
  printf("\n\n");
  for(i=0;i<bfil;i++){
      for(j=0;j<bcol;j++){
          printf("Escribe el valor de la matriz B (%d, %d):", i+1, j+1);
          scanf("%d", &B[i][j]);
      }
  }
 /*realiza la multiplicacion*/
  for(i=0;i<afil;i++){
      for(j=0;j<bcol;j++){
          C[i][j]=0;
          for(k=0;k<acol;k++){
              C[i][j]=(C[i][j]+(A[i][k]*B[k][j]));
          }
      }
  }
 
/*imprime matriz A*/
  printf("\n\n\t\t\t Matriz A");
  printf("\n");
  for(i=0;i<afil;i++){
      printf("\n\t\t");
      for(j=0;j<acol;j++){
          printf("  %6d  ", A[i][j]);
      }
  }
  /*imprime matriz B*/
  printf("\n\n\t\t\t Matriz B");
  printf("\n");
  for(i=0;i<bfil;i++){
      printf("\n\t\t");
      for(j=0;j<bcol;j++){
          printf("  %6d  ", B[i][j]);
      }
  }
 /*imprime matriz C*/
  printf("\n\n\t\t\t Matriz C");
  printf("\n");
  for(i=0;i<afil;i++){
      printf("\n\t\t");
      for(j=0;j<bcol;j++){
          printf("  %6d  ", C[i][j]);
      }
  }
  printf("\n\n");
	
	/*muestra los primos*/
	for(i=0;i<afil;i++){
   for(j=0;j<bcol;j++){	 
	 n=C[i][i];
	 if(n%2==0){
		primo=C[i][j]; 
		 }
		 printf("el numero primo, pocicion %d",primo);
		 printf("\n");
	}}	
	
	
	
	/*asigna los primos al vector*/
 for(i=0;i<afil;i++){
 for(j=0;j<bcol;j++){	 
	 n=C[i][j];
	 if(n%2==0){
		 primo=C[i][j];
	vector[cont]=C[i][j];}
	 cont++;
	 
	 }}	
	
/* ordena el vector*/
 for (i=0; i<acol-1; i++)
{
   for (j=i+1; j<acol; j++)
  {
    if(vector[i]>vector[j])
    {
     aux = vector[i];
     vector[i] =vector[j];
     vector[j] = aux;
    }
  }
}
/* muestra el vector ordenado*/
for(i=0;i<acol;i++){
	printf("%d",vector[i]);
	}
printf("\n\n");


	
	
}
