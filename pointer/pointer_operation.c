#include <stdio.h>

//ָ������
//ָ�������
//����ָ��ʲô���ͣ����е�ָ��Ĵ�С����һ���ģ���Ϊ���ǵ�ַ
//����ָ��ͬ���͵�ָ���ǲ���ֱ�ӻ��ำֵ�ģ�����Ϊ�˱����ô�ָ��
int main() {
    char ac[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9,};
    char *p = ac;
    int size = sizeof(ac) / sizeof(ac[0]);
    //ʹ��ָ���������
    while (*p != ac[size - 1]) {
        printf("%d ", *p++);
    }
    printf("p =%p\n", p);
    printf("p+1=%p\n", p + 1);
    //sizeof(char) = 1
    //sizeof(int) = 4
    int ai[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9,};
    int *q = ai;
    printf("q =%p\n", q);
    printf("q+1=%p\n", q + 1);
    return 0;
}
