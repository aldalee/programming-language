#include <stdio.h>

#define SIZE 10

//����������ȷ����[0,9]��Χ�ڵ�������ͳ��ÿһ�����ֳ��ֵĴ���������-1��ʾ����
int main() {
    int x = 0;
    int counts[SIZE] = {};
    while (x != -1) {
        scanf("%d", &x);
        counts[x]++;
    }
    for (int i = 0; i < SIZE; ++i) {
        printf("%d:%d\n", i, counts[i]);
    }
    return 0;
}