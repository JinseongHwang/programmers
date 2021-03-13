
// 정수 제곱근 판별
// 수학

// powl 은 pow랑 같지만 long double 형태로 반환한다.

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