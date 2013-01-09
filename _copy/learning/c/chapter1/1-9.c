#include <stdio.h>

int main(void)
{
    int c, space;
    space = 0;
    while ((c=getchar()) != EOF) {
	if (c == ' ') {
	    if (space == 0) {
		putchar(c);
		space = 1;
	    }
	} else {
	    putchar(c);
	    space = 0;
	}
    }
    return 0;
}
