#include <stdio.h>

//ָ��Ӧ�ó���һ
//�������ض��ֵ��ĳЩֵ��ֻ��ͨ��ָ�뷵��
//����Ĳ���ʵ��������Ҫ������صĽ���ı���
//�����������е�����ʵ������ָ��
//sizeof(a) == sizeof(int*)
//���ǿ�����������������[]��������
//��������������ָ�룬��������������ַ
void min_max(int *a, int len, int *min, int *max);

//ָ��Ӧ�ó�����
//�������������״̬�����ͨ��ָ�뷵��
//���õ���·���ú�����������Ĳ�������Ч��Χ�ڵ�ֵ����ʾ������-1
//�����κ���ֵ������Ч�Ŀ��ܽ��ʱ���͵÷ֿ�������
/**
 * ������������
 * @param a ������
 * @param b ����
 * @param result ���
 * @return �ɹ����� 1�����򷵻� 0
 */
int divide(int a, int b, int *result);
//��ָ������ʲô��
//-��Ҫ����ϴ������ʱ��������
//-��������������������
//-�������ز�ֹһ���������Ҫ�ú������޸Ĳ�ֹһ������
//-��̬������ڴ�
int main() {
    int a[] = {1, 2, 3, 4, 5, 5, 6,};
    int min, max;
    min_max(a, sizeof(a) / sizeof(a[0]), &min, &max);
    printf("min=%d,max=%d\n", min, max);
    int x, y;
    printf("Enter x and y:");
    scanf("%d %d", &x, &y);
    int res;
    if (divide(x, y, &res)) {
        printf("%d/%d=%d\n", x, y, res);
    }
    //������ָ���������û��ָ���κα��������Ұָ��
//    int *np;
    int *np = NULL;
    printf("np=%p", np);
    return 0;
}

void min_max(int *a, int len, int *min, int *max) {
    *min = *max = a[0];
    for (int i = 1; i < len; ++i) {
        if (a[i] < *min) {
            *min = a[i];
        }
        if (a[i] > *max) {
            *max = a[i];
        }
    }
}

int divide(int a, int b, int *result) {
    if (b == 0) {
        return 0;
    }
    *result = a / b;
    return 1;
}