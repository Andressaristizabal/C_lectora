#include <stdio.h>

int main(){
	FILE *fp;
	char buff[255];
	
	fp = fopen("/letras.txt","r");
	fscanf(fp,"%s",buff);
	printf("1 : %s");

	printf("Cantidad de Letras A es ");
	return 0;
}
