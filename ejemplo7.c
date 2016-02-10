#include <stdio.h>
#include <stdlib.h>

int *AlfaFnApEn(int AEn);

int main(int argc, char const *argv[])
{

	if (argc != 2) {
		printf("Introduce un entero como argumento\n");
		return 0;
	}

	int num = atoi(argv[1]);

	int *(*pApFnApEn)(int) = AlfaFnApEn;
	printf("%ld\n", *(*pApFnApEn)(num));
	return 0;
}

int *AlfaFnApEn(int AEn){
	int *pApEn = (int *)malloc(sizeof (int));
	*pApEn = AEn;
	return pApEn;
}



