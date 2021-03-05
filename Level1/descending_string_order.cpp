
// 문자열 내림차순으로 배치하기
// 정렬

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    sort(s.begin(), s.end(), [](const char& a, const char& b) { return a > b; });
    return s;
}