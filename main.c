/*
 * このソースコードは難読化目的で作成しました。
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct H {
    char hentai[50];
};

void hello(char str[]) {
    strcpy(str, "Hello, World!");
}

int main(int argc, char* argv[]) {
    struct H sex;
    hata1:
    if (argc < 1) {
        for (int i = 0; i < 1; i++) {
            while (1) {
                hello(sex.hentai);
                if (i == 0) printf("%s\n", sex.hentai);
                else printf("%s\n", sex.hentai);
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
