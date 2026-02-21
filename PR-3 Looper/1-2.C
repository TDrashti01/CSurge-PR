#include <stdio.h>
#include <conio.h>

main ()
{
	int i, count = 0;

	clrscr();

	printf("\n\tEnter any Number :");
	scanf("%d", &i);

	while (i != 0) {
		count++;
		i = i / 10;
	}

	printf("\n\tTotal Number of Digits : %d", count);

	getch();
}