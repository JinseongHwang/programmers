#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "김서방은 ";
    
    bool complete = false;
    for (int idx = 0; idx < seoul.size(); ++idx) {
        if (seoul[idx].length() < 3) continue;
        for (int i = 0; i < seoul[idx].length() - 2; ++i) {
            string curr = seoul[idx].substr(i, 3);
            if (curr == "Kim") {
                answer += to_string(idx);
                complete = true;
                break;
            }
        }
        if (complete) break;
    }
    answer += "에 있다";
    return answer;
}

int main() {
    vector<string> v = { "Jane", "Kim" };
    cout << solution(v) << "\n";
    return 0;
}