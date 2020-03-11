#include <stdio.h>
#include <stdlib.h>
main ()
{
	int num,num2,suma,resta,producto,division;
	num=0;
	printf("Introduce un numero\n");
	scanf("%d",&num);
	printf("Introduce otro numero\n");
	scanf("%d",&num2);
	//operaciones
	printf("La suma de los numeros %d y %d es: %d\n",num,num2,(num+num2));
	printf("La resta de los numeros %d y %d es: %d\n",num,num2,(num-num2));
	printf("El producto de los numeros %d y %d es: %d\n",num,num2,(num*num2));
	printf("La division de los numeros %d y %d es: %d\n",num,num2,(num/num2));
  system("PAUSE");	
  return 0;
}
