#include <stdio.h>


int main(int argc, char const *argv[])
{
	int XArEn[] = {4,5,7};
	int *pApEn = XArEn;
	int *(*pApArApEn)[3] = (int*(*)[3])XArEn;

	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", *((*pApArApEn)+i));
	}
	//El nombre de un arreglo es un apontador constante al primer elemento del arreglo
	

}
