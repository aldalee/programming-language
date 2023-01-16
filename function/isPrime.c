#include <stdio.h>
#include <math.h>

//��������ԭ�ͣ��������߱��������������ʲô����
int isPrime(int x);
//int isPrime(int); //����Ҳ�ǿ��Եģ���һ�㲻����

//�������
int main() {
    int m, n;
    int sum = 0;
    int cnt = 0;
    scanf("%d %d", &m, &n);
    if (m == 1) m = 2;
    for (int i = m; i <= n; ++i) {
        if (isPrime(i)) {   //��������
            sum += i;
            cnt++;
        }
    }
    printf("%d %d\n", cnt, sum);
    return 0;
}

//��������
int isPrime(int x) {
    if (x == 1 || (x % 2 == 0 && x != 2)) {
        return 0;
    }
    int ret = 1;
    for (int i = 3; i < sqrt(x); i += 2) {
        if (x % i == 0) {
            ret = 0;
            break;
        }
    }
    return ret;
}