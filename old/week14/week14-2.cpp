#include <stdio.h>
int z=10;
void func()
{
    int y;
    printf("剛進來的func()時, z是%d\n", z);
    z = 2;
    printf("在func()裡,把z改成%d\n", z);



}
int main()
{
    int x;
    func();

    printf("在 main()裡, 現在是%d\n", z);
    z=1;
    printf("在main()裡改 z的值現在是%d\n", z);
}
