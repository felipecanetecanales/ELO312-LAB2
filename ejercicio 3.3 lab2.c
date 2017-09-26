#include <stdio.h>

void main()
  {

  char dato[5]="Felep"; //el 5 vendria siendo el n, puedes cambiarlo al numero que quieras al igual que el texto, da lo mismo el
  char dato2[5];        // ancho del texto, ahi depuren y compilen. Abran el Watch y coloquen dato y dato2, observen lo que va imprimiendo 
  int i=0;
  char *p;              // puntero necesario para que las direcciones sean distintas en ambas cadenas (requisito necesario dice 0x1110 u otra)
                        // con el fin de que no copiemos las weas con direccion incluida
  while(dato[i]!= '\n') // aqui se hace la magia, el '\n' es necesario
  {
    p=&dato[i];
    dato2[i]=*p;        
    i++;
  }
  dato2[i]= '\n';
  }