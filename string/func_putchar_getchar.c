#include <stdio.h>
#include <string.h>

int main() {
    int ch;
    //Windows: Ctrl-Z����EOF
    //Linux: Ctrl-D����EOF
    while ((ch = getchar()) != EOF) {
        putchar(ch);
    }
    printf("EOF!!!");
    return 0;
}