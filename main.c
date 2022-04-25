/*
 * このソースコードは難読化目的で作成しました。
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    const char *A = "Hello, World!\n";
    hata1:
    if (argc < 1) {
        for (int i = 0; i < 1; i++) {
            while (1) {
                if (i == 0) {
                    printf("%s", A);
                }
                break;
            }
            break;
        }
    } else {
        argc = 0;
        goto hata1;
    }
    return 0;
}
