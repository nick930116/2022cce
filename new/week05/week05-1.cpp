#include <stdio.h>
int main()
{
    int a=10;
    printf("a:%d\n ��b%d\n", a, &a);
    int b=20;
    printf("b:%d\n ��b%d\n", b, &b);
    int c=20;
    printf("c:%d\n ��b%d\n", c, &c);
}
