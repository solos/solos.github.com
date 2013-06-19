#include <stdio.h>

/* 当fahr=300, 20, ..., 0 时, 打印华氏温度与摄氏温度的对照表; 
    浮点数版本 
 */

int main(){

    int fahr;

    printf("华氏温度-摄氏温度对照表\n");
    for (fahr=300; fahr >= 0; fahr = fahr - 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
}
