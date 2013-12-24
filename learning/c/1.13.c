#include <stdio.h>

#define IN 1 /* 在单词内 */
#define OUT 0 /* 在单词外 */

/* 
 * 打印输入中单词单词长度的水平、垂直直方图 
 * */

int main() {
    int c, nw, state, i, j, len;
    int lengths[100];
    for(i = 0; i < 100; i++)
        lengths[i] = 0;
    state = OUT;
    nw = 0;
    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z'){
            if (state == OUT) {
                state = IN;
                ++nw;
                lengths[nw] = lengths[nw] +1;
            } else {
                lengths[nw] = lengths[nw] + 1;
            }
        }
        else if (c == ' ' || c == '\n' || '\t') {
            state = OUT;
        }
    }
    for(i=0; i < 100; i++) {
        len = lengths[i];
        if (len > 0) {
            printf("\n");
            for (j=0; j < lengths[i]; j++){
                printf("*");
            }
        }
    }
}
