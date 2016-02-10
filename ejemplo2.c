#include <stdio.h>


int main(int argc, char const *argv[])
{
	int AEn = 5;
	int *pApEn = &AEn;

	printf("%d\n", AEn); //5

	*pApEn = 20;

	printf("%d\n", AEn); //20
	printf("%d\n", *pApEn);
	return 0;
}

