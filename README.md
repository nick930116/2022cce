# 2022cce

1. 畫星星
```cpp
#include <stdio.h>
int main()
{
    for(int i=5; i>0; i--){
        for(int j=0; j<i; j++){
            printf("*");
        }
    printf("i:%d星星\n", i);
    }
}
```
2. 用星星畫出等腰三角形
```cpp
#include <stdio.h>
int main()
{
    for(int i=1; i<5; i++){
        int space=5-i, star=2*i-1;
        for(int k=0; k<space; k++) printf(" ");
        for(int k=0; k<star; k++) printf("*");
        printf("\n");
    }
}
```
3. 約分
```cpp
include <stdio.h>
int main()
{
    printf("請輸入2個整數,要約分: ");
    int a, b;
    scanf("%d %d", &a, &b); ///51 68

    int ans; ///約分的答案 (最大公因數)
    for(int i=1; i<=a; i++){ ///1...51 全部的數
        if( a%i==0 && b%i==0 ){ ///都整數
            ans = i; ///記下這個數字
        }
    }
    printf("ans: %d 可約分", ans);
    ///把答案印出來
}
```
4. 輾轉相除法
```cpp
#include <stdio.h>
int main()
{
    int a, b, c; ///老大, 老二, 老三
    scanf("%d %d", &a, &b);
    while(1){///1直做事
            c = a%b;///老三
            printf("老大:%d 老二:%d 老三:%d\n", a, b, c);
            if( c==0 ) break;
            a=b;
            b=c;
    }
    printf("答案b: %d ", b);
}
```
