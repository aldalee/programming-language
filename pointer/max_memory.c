#include <stdio.h>
#include <stdlib.h>

//ϵͳ����malloc���Ҷ����ڴ��أ�
int main() {
    void *p = NULL;
    printf("before malloc p=%p\n", p);
    int cnt = 0;
    while ((p = malloc(100 * 1024 * 1024))) {
        cnt++;
    }
    printf("after malloc p=%p\n", p);
    //ʵ���� The system assigns me 22800MB of memory!
    //��Ӧ�����߼��ϵģ�Ȼ��ϵͳ��û�и�����
    printf("The system assigns me %d00MB of memory!", cnt);
    free(p);
    return 0;
}
