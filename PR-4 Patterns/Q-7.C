#include <stdio.h>
#include <conio.h>
main ()
{
	int i, j;
	clrscr ();
	printf("\n\n");

	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			if (j == 1 || (i == 1 || i == 3) || (i == 2 && j == 5))
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}

	getch ();
}