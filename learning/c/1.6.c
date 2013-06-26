#include <stdio.h>
/* 
 * value of getchar() != EOF 
 */


int main() {
    int c;
    c = (getchar()!= EOF);
    printf("'getchar() != EOF' is equal to %d\n", c);
}
