#include <stdio.h>

int main(void)
{
    int c, i;
    int nletter[52];

    for(i = 0; i < 52; i++){
	nletter[i] = 0;
    }

    while ((c=getchar()) != EOF) {
	if (c >= 'A' && c <= 'z')
	    nletter[c - 'A']++;
    }

    for (i = 0; i < 52; i++) {
	if (nletter[i] != 0)
	    printf("%c: %d\n", i + 'A', nletter[i]);
    }
    return 0;
}
