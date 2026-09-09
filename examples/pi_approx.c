// examples/pi_approx.c
// 题意：输入精度 eps，用韦达/格雷戈里-莱布尼茨类递推计算 pi 的近似值
// 考察点：double 递推、while 循环、累加、printf 控制小数位
//
// 递推关系：term_{n} = term_{n-1} * n / (2n+1)，从 term_0 = 1 起
// 求和后乘 2 即 pi 近似；循环在 term < eps 时结束，并补上最后一项
//
// 样例输入：0.0001
// 样例输出：3.141393

#include <stdio.h>

int main(void) {
    double eps;
    if (scanf("%lf", &eps) != 1) return 0;

    double sum = 0.0;
    double term = 1.0;   // term_0
    int n = 0;

    while (term >= eps) {
        sum += term;
        n++;
        term = term * n / (2.0 * n + 1);
    }
    sum += term;          // 补上越界后的第一项

    printf("%.6f\n", 2.0 * sum);
    return 0;
}
