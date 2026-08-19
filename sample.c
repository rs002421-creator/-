#include <stdio.h>
#include <ctype.h>

int main(void) {
    char c1 = 'A';       // 半角英字
    char c2 = '１';      // 全角数字（UTF-8では3バイト）

    printf("isalnum('A') = %d\n", isalnum(c1)); // 1（true）
    printf("isalnum('１') = %d\n", isalnum(c2)); // 不正判定（0になる）

    return 0;
}
