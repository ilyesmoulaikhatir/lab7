#include <stdio.h>
#include "min.h"

int main ()
{
	int n=5,t[]={2,5,7,2,9},val_min;
	
	min(t,n,&val_min);
	
	printf("La valeur minimum du tableau est %d.\n", val_min);

	return 0;
}
