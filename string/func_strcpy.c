#include <stdio.h>
#include <string.h>

//char *strcpy(char *restrict dst,const char *restrict src);
//��src���ַ���������dst
//restrict����src��dst���ص� C99
//����dst
//����һ���ַ���
//char *dst = (char*)malloc(strlen(src)+1);
//strcpy(dst,src);
char *_strcpy(char *dst, const char *src) {
    int idx = 0;
    do {
        dst[idx] = src[idx];
        idx++;
    } while (src[idx]);
    return dst;
}

int main() {
    char s1[] = "abc";
    char s2[] = "eee";
//    strcpy(s1, s2);
    _strcpy(s1, s2);
    printf("s1=%s\n", s1);
    printf("s2=%s", s2);
    return 0;
}