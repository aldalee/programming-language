#include <stdio.h>
#include <stdlib.h>

//�����������ʱ���ȸ����������Ȼ�������룬Ҫ��¼ÿ������
//C99�����ñ��������鶨��Ĵ�С��C99֮ǰ�أ�
//- ��̬�ڴ���䣡����
//void *malloc(size_t size);
//��malloc����Ŀռ�Ĵ�С�����ֽ�Ϊ��λ��
//���صĽ����void*����Ҫ����ת��Ϊ�Լ���Ҫ������
// -���� (int*)malloc(n*sizeof(int))
//ע�⣺
// -ʹ��ǰҪ#include <stdlib.h>
// -ʹ�ú�Ҫ����free(void *_Memory)�ͷ�������ڴ�ռ�
int main() {
    int n;
    int *a;
    int i;
    printf("Enter the length of a:");
    scanf("%d", &n);
    a = (int *) malloc(n * sizeof(int));
    for (i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    //��������
    for (i = 0; i < n; ++i) {
        printf("%d ",a[i]);
    }
    free(a);
    return 0;
}
