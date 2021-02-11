#include <stdio.h>
#include <stdlib.h>

int i = 0;
int a = 1;

void test(){
    i ^ = a;
    i ^ = a;
    
    return;
}

int main(){
    test();
    for (i;i <= 0;i++){
      if (i == 0) {
        printf("Hello, World!");
      }
    }
    return 0;
}
