#include <stdio.h>
#include <stdbool.h>
#include "inc/ds.h"

int main(void) {

	node *ll, *next, *monoStep, *biStep;

	monoStep = biStep = next = ll = createLL(1);
	next = appendLL(next, 2);
	next = appendLL(next, 3);
	next = appendLL(next, 4);
	next = appendLL(next, 5);
	next = appendLL(next, 6);
	next = appendLL(next, 7);
	next = appendLL(next, 8);
	next = appendLL(next, 9);

	printLL(ll);

    bool bi = false;

    while (true) {
        monoStep = monoStep->next;
        if (monoStep == NULL) break;
        if (bi) biStep = biStep->next;
        bi ^= true;
    }

    printf("\nMiddle Element: [ %d | %p ]\n", biStep->value, biStep);

	destroyLL(ll);

	return 0;
}