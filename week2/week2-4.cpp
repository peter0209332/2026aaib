// week02-4 三數極大值
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // 假設 a 是最大值，依序與 b, c 比較並更新
    if (b > a) a = b;
    if (c > a) a = c;

    printf("%d\n", a);
}
