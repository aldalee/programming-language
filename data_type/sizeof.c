#include <stdio.h>

//C������Ҫ���ͣ��������͵İ�ȫ��鲢���㹻
//C���Ե�����
//  ����: char��short��int��long��long long
//  ������: float��double��long double
//  �߼�: bool
//  ָ��
//  �Զ�������
//sizeof ��һ�������������ĳ�����ͻ�������ڴ�����ռ�ݵ��ֽ���
int main() {
    printf("sizeof(char)=%llu byte\n", sizeof(char));
    printf("sizeof(short)=%llu\n", sizeof(short));
    //intȡ���ڱ�������CPU����ͨ����������"һ����"
    printf("sizeof(int)=%llu\n", sizeof(int));
    //longȡ���ڱ�������CPU����ͨ����������"һ����"
    printf("sizeof(long)=%llu\n", sizeof(long));
    printf("sizeof(long long)=%llu\n", sizeof(long long));
    //unsigned�ĳ��Բ�����չ���ܱ��ķ�Χ������Ϊ����λ����������������
    //���һ��������������Ҫ����Լ���unsigned�������ں����u��U
    char c = 255;
    unsigned char ch = 255;
    int i = 255;
    printf("c=%d ch = %d i=%d", c, ch, i);
    return 0;
}