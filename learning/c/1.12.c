#include <stdio.h>

#define IN 1 /* 在单词内 */
#define OUT 0 /* 在单词外 */

/* 以每行一个单词的形式打印其输入 */

int main() {
    int c, state;
    while ((c = getchar()) != EOF){
        if (c == ' ' || c == '\t' || c == '\n'){
            if (state = OUT)
                continue;
        } else {
            if (state == OUT) {
                printf("\n");
                state = IN;
            } 
            putchar(c);               
        }
    }
}
