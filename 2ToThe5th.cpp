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


// Most Obfuscated: Which code snippet was the most difficult to understand?

// Inspired by James Tetazoo's work "No Knife", 2ToThe5th is a study in mixed data representation models in 25 lines of code.
// The artist's mode d'emploi relies upon minimalist data encoding.  Strings are represented as numbers; instructions as strings.
// The alternating modalities of the data are each deconstructed to form the other mode.
// Individual instructions contain conventional, almost readable C-language constructs while the overall purpose and intent of the program is
// obfuscated to the point of both unreadability and unmaintainable.
// The temporary state of each dataum is overcome throughout by symbolic nihility, and pervades our earliest attempts at analysis.

// E n g i n e e  r    i n g   H e a l t    h
// * # 7 1 # 9 \n \037 5 , * ~ ' , = . \035 6
// C e r n e r C  e    r n e r C e r n e    r

