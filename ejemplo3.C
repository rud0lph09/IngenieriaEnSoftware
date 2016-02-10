#include <stdio.h>


int main(int argc, char const *argv[])
{
	int AEn = 5;
	int *pApEn = &AEn;
	int &qRDEn = AEn;

	qRDEn = 10;

	printf("%d %d %d\n", AEn, qRDEn, *pApEn);
	return 0;
}
