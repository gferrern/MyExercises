#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1416
main ()
{
	float radio,longitud,area;
	printf("Introduce el radio de una circunferencia \n");
	scanf("%f",&radio);
	longitud=2*PI*radio;
	printf("La longitud es: %g\n",longitud);
	area=PI*(pow(radio,2));
	printf("El area del circulo es: %g\n",area);
	//g para quitar los ceros de detras
  system("PAUSE");	
  return 0;
}
