#include <stdio.h>

//ָ�룬���Ǳ����ַ�ı���
//��ͨ������ֵ��ʵ�ʵ�ֵ
//ָ�������ֵ�Ǿ��С�ʵ��ֵ�ı������ĵ�ַ
//��Ϊ������ָ�룬�ڱ�����ʱ�õ���ĳ�������ĵ�ַ
void func(int *p) {
    printf("func::p=%p\n", p);
    //�ں��������ͨ�����ָ����������i
    //*��һ����Ŀ���������������ָ���ֵ����ʾ�ĵ�ַ�ϵı���
    //��ȡָ����ָ�������ֵ
    int i = *p;
    printf("func::*p=%d\n", *p);
    printf("func::i=%d\n", i);
    //�޸�ָ����ָ�������ֵ
    *p = 2;
}

int main() {
    int i = 0;
    int *p = &i;
    printf("p=%p\n", p);
    func(p);
    printf("i=%d", i);
    return 0;
}