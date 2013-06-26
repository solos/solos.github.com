#include <stdio.h>
/*
 * count space, tab and newline
 */

int main() {
    int space, tab, nl, c;

    space = 0;
    tab = 0;
    nl = 0;

    while ( (c = getchar()) != EOF)
        if (c == ' ') {
            ++space;
        }
        else if (c == '\t') {
            ++tab;
        }
        else if (c == '\n') {
            ++nl;
        }
        else {
            continue;
        }
    printf("space: %d\ntab: %d\nnewline: %d\n", space, tab, nl);
}
