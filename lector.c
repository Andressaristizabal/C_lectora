#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *archivo;
	char c;
    int as = 0;

	archivo = fopen("letras.txt","r");
	if (archivo == NULL)
        {
            printf("\nError no archivho. ");
        }
    else
    {
        while (feof(archivo) == 0)
        {
            c = fgetc(archivo);
            if(c == 'a' || c == 'A'){
                as = as + 1;
            }
        }
    }
    printf("%i",as);
    fclose(archivo);
	return 0;
}
