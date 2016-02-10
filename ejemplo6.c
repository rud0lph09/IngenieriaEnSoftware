#include <stdio.h>

float AlfaFnRe(float XRe);

int main(int argc, char const *argv[])
{
	float XRe = 0.5;
	float (*pApEnRe)(float) = AlfaFnRe;
	printf("%f %f\n", XRe, (*pApEnRe)(XRe));
	return 0;
}

float AlfaFnRe(float XRe){
		return sin(XRe);
	}