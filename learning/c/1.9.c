#include <stdio.h>
/*
 * replace multi spaces with one space
 */

int main() {
    int c, space;
    space = 0;
    while ( (c = getchar()) != EOF)
        if (c == ' '){
            if (space == 1) {
                continue;
            } else {
                putchar(c);
                space = 1;
            }
        } else {
            putchar(c);
            space = 0;
        }
}
