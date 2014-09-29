#include <windows.h>
#include <stdio.h>

int main(void)
{
	int A[6] = { 1768386117, 1919247726, 543649385, 1818322248, 26740 };
	int B[6] = { 0 };
	char C[] = "*#71#9\n\0375,*~',=.\0356";
	int *d, *e, *f, *g;
	int i;
	e = g = B;
	do
	{
		i = 0;
		for (d = f = ((e == A)? B : A); *d % 256 || (e++, *(d = d + 1)); *d /= 256)
		{
			system("cls");
			printf("%.*s%.*s%s\n", i, g, 4, f + (i / 4), f + (i / 4) + 1);
			*e += (((*d) % 256) + (f==A? 1:-1)*(C[i++] - 44)) * (1 << 8 * i);
		}
		e = g = ((f == A)? A : B);
	} while (!0);

	return 0;
}
// 2ToThe5th.cpp : Defines the entry point for the console application.
//


// E n g i n e e  r    i n g   H e a l t    h
// * # 7 1 # 9 \n \037 5 , * ~ ' , = . \035 6
// C e r n e r C  e    r n e r C e r n e    r

