#include <stdio.h>
#include "max.h"

int main ()
{
	int n=5,t[]={2,5,7,2,9},val_max;
	
	max(t,n,&val_max);
	
	printf("La valeur maximum du tableau est %d.\n", val_max);

	return 0;
}
