#include <stdio.h>

//���ַ����������·����ֵĳ���
int main(int argc, const char *argv[]) {
    int i = 0;
    char *month[] = {"January", "February", "March", "April", "May", "June",
                     "July", "August", "September", "October", "November", "December"};
    scanf("%d", &i);
    if (i >= 1 && i <= 12) {
        printf("%s\n", month[i - 1]);
    } else {
        printf("I don't known!");
    }
    return 0;
}