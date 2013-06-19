#include <stdio.h>

/* 当fahr=0, 20, ..., 300时, 打印华氏温度与摄氏温度的对照表; 
    浮点数版本 
 */

int main(){
    float fahr, celsius;
    int lower, upper, step;

    lower = -17.8; /* 温度表的下限 */
    upper = 148.9; /* 温度表的上限 */
    step = 5.0 / 9.0 * 20.0;   /* 步长 */

    celsius = lower;
    printf("摄氏温度-华氏温度对照表\n");
    while (celsius <= upper) {
        fahr = celsius * 9.0 / 5.0 + 32.0;
        printf("%6.1f %3.0f \n", celsius, fahr);
        celsius = celsius + step;
    }
}
