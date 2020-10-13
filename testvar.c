#include <stdio.h>
#include "var.h"

int main ()
{
	int n=5,t[]={2,5,7,2,9};
	float val_var;
	
	var(t,n,&val_var);
	
	printf("La variance de la série est de %f.\n", val_var);

	return 0;
}
