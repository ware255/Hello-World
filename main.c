#include <stdio.h>
#include <stdlib.h>

int main(int argc; char** argv){
    if (!argc){
        for (int i;i <= 0;++i){
            while (true) {
                if (i == 0) {
                    hata1:
                    printf("Hello, World!\n");
                    getchar();
                    exit(0);
                }
            }
        }
    } else {
        hata1;
    }
    return 0;
}
