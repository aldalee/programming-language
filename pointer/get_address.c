#include <stdio.h>

//&ȡ��ַ����ñ����ĵ�ַ�����Ĳ����������Ǳ���
//��ַ�Ĵ�С�Ƿ���int��ͬȡ���ڱ�����
//printf("%p",&i);
int main() {
    int i = 0;
    printf("%x\n", &i);
    printf("%p\n", &i);
    printf("sizeof(int)=%llu\n", sizeof(int));
    printf("sizeof(&i)=%llu\n", sizeof(&i));
    //ȡ����ĵ�ַ
    int arr[10];
    printf("%p\n", &arr);
    printf("%p\n", arr);
    printf("%p\n", &arr[0]);
    printf("%p\n", &arr[1]);
    return 0;
}