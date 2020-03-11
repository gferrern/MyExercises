# include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int num,num2,num3,mayor=0,menor=0;
		printf("Introduzca un numero\n");
		scanf("%d",&num);
		printf("Introduzca un numero\n");
		scanf("%d",&num2);
		printf("Introduzca un numero\n");
		scanf("%d",&num3);
		
		if (num==num2==num3)
		{
			printf("Los numeros son iguales\n");
		}
		mayor = (num>num2 && num>num3)?num:((num2>num && num2>num3)?num2:num3);
				printf("el num mayor es %d\n",mayor);

		
	system("PAUSE");
	return 0;
}
