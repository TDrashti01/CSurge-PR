#include <stdio.h>
#include <conio.h>
main ()
{
	int i, j, k, s;
	clrscr ();
	printf("\n\n");

	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d ", j);
		}
		for (s = 5; s > i; s--)
		{
			printf("    ");
		}
		for (k = i; k >= 1; k--)
		{
			printf("%d ", k);
		}
		printf("\n");
	}

	getch ();
}