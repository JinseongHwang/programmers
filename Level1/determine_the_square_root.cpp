
// ���� ������ �Ǻ�
// ����

// powl �� pow�� ������ long double ���·� ��ȯ�Ѵ�.

#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = -1;
    double res = sqrt(n);
    if (res - int(res) == 0) answer = powl(res + 1, 2);
    return answer;
}