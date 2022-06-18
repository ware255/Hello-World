/*
 * このソースコードは難読化目的で作成しました。
 */
#include <stdio.h>
#include <stdlib.h>

const char* hello() {
    const char *A = "Hello, World!\n";
    return A;
}

int main(int argc, char* argv[]) {
    hata1:
    if (argc < 1) {
        for (int i = 0; i < 1; i++) {
            while (1) {
                if (i == 0) {
                    printf("%s", hello());
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
