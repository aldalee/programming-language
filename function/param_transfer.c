#include <stdio.h>

//��������
//C�����ڵ��ú���ʱ����Զֻ�ܴ�ֵ������
void swap(int a, int b);
void _swap(int *a, int *b);

int main() {
    int a = 1, b = 2;
//    swap(a, b);
    _swap(&a, &b);
    printf("a=%d,b=%d", a, b);
    return 0;
}

void swap(int a, int b) {
    int t = a;
    a = b;
    b = t;
}
void _swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}