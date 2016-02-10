#include <stdio.h>


int main(int argc, char const *argv[])
{
	
	int AEn = 58;
	int BEn = 8;
	int *AApEn = &AEn;
	int *BApEn = &BEn;
	int *XArApTen[2] = {AApEn, BApEn};
	int *(*pAparApEn)[2] = (int *(*)[2])XArApTen;
	printf("%d %d\n", *XArApTen[0], *XArApTen[1]);


}
