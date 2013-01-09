#include <stdio.h>

int main(void)
{
    int c, length;
    length = 0;
    while ((c=getchar()) != EOF) {
	if (c >= 'A' && c <= 'z') {
	    length ++;
	    printf("-");
	} else {
	    if (length == 0)
		continue;
	    else
		length = 0;
	    printf("\n");
	}
    }
    return 0;
}
