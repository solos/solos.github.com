#include <stdio.h>
#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

int main(void)
{
    int c, state;

    state = OUT;
    while ((c = getchar()) != EOF) {
	if (c == '\n' || c == ' ' || c == '\t') {
	    if (state == OUT) {
		continue;
	    } else {
		putchar('\n');
		state = OUT;
	    }
	} else {
	    putchar(c);
	    state = IN;
	}
    }
    return 0;
}
