#include <stdio.h>

int main(void)
{
    int c, space, tab, nl;
    space = tab = nl = 0;
    while ((c = getchar()) != EOF) {
	switch (c) {
	case ' ':
	    ++space;
	    break;
	case '\t':
	    ++tab;
	    break;
	case '\n':
	    ++nl;
	    break;
	default:
	    continue;
	}
    }
    printf("space:%d\ttab:%d\tnl:%d\n", space, tab, nl);
    return 0;
}
