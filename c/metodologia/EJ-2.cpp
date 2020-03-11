#include <stdio.h>
#include <math.h>
#include <stdlib.h>
main ()
{
	int x = 1, y = 4, z = 10;
	float pi = 3.141592, e = 2.718281;
	printf("2 * X + 0,5 * Y - 1 / 5 * Z = %d\n",(2 * x + 0,5 * y - 1 / 5 * z ));
	printf("( PI * X ^2 > Y OR 2 * PI * X <= Z ) = %d\n",((pi * pow(x,2)) > y || 2 * pi * x <= z ));
	printf("E^(X-1)/(X*Z)/(X/Z) = %d\n",pow(e,x-1)/(x*2)/(x/z));
//	printf("DON"+"JUAN" == "DONJUAN" || "A" == "a")
	
	system("PAUSE");
	return 0;
}
		