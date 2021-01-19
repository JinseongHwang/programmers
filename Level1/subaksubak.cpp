
// 수박수박수박수박수박수?
// 문자열

#include <string>
#include <vector>

using namespace std;

const int PATTERN_SIZE = 2;

string solution(int n) {
    string answer = "";
    string pattern[PATTERN_SIZE] = { "수", "박" };
    for (int i = 0; i < n; i++) {
        answer += pattern[i % PATTERN_SIZE];
    }
    return answer;
}