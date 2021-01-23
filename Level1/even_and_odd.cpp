
// 짝수와 홀수
// 수학?

#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    // 서로 같은 표현이다.
    // return num % 2 ? "Odd" : "Even";
    return num & 1 ? "Odd" : "Even";
}