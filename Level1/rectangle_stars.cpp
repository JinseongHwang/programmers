
// 직사각형 별찍기
// 구현

#include <cstdio>
using namespace std;

int main(void) {
    int n, m; scanf("%d %d", &n, &m);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}