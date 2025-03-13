/*
============================================================
  Fichero: input.c
  Creado: 13-03-2025
  Ultima Modificacion: dijous, 13 de març de 2025, 10:46:45
  oSCAR jIMENEZ pUIG                                       
============================================================
*/

#include "input.h"

char* input(unsigned int l,char* s) {
	char* ptr=s;
	char c=0;
	while(ptr-s<l && (c=getchar())!='\n') {
		*ptr++=c;
	}
	*ptr='\0';
	return s;
}

int main() {
	char str[10];
	printf("%s\n",input(9,str));
	return 0;
}



