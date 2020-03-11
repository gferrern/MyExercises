#include <stdio.h>
#include <stdlib.h>
main ()
{
	int cesto = 0, capacidad=10, patatasNecesarias = 100, patatasPeladas = 0;
	while(patatasPeladas < patatasNecesarias)
	{
		if(cesto<=0)
		{
			cesto+=capacidad;  
			printf("---------%d CESTO LLENO----------\n",cesto);
		}
		cesto--; 
		printf("\nPelando patata\t y aun nos queda %d patatas en el cesto \n",cesto);
		patatasPeladas++;
	}
	printf("hemos conseguido %d patatas peladas!\n",patatasPeladas);
	system("PAUSE");
	return 0;
}
