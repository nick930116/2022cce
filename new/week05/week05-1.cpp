#include <stdio.h>
int main()
{
    int a=10;
    printf("a:%d\n 放在%d\n", a, &a);
    int b=20;
    printf("b:%d\n 放在%d\n", b, &b);
    int c=20;
    printf("c:%d\n 放在%d\n", c, &c);
}
