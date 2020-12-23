
// 모의고사
// 완전탐색

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int matching(const vector<int>& answers, const vector<int>& pattern) {
    int pattern_length = pattern.size();
    int result = 0;
    for (int i = 0; i < answers.size(); i++) {
        int right_answer = pattern[i % pattern_length];
        if (answers[i] == right_answer) result++;
    }
    return result;
}

vector<int> solution(vector<int> answers) {
    vector<int> result;
    
    int arr[3];
    arr[0] = matching(answers, { 1,2,3,4,5 });
    arr[1] = matching(answers, { 2,1,2,3,2,4,2,5 });
    arr[2] = matching(answers, { 3,3,1,1,2,2,4,4,5,5 });

    int mx = max({ arr[0], arr[1], arr[2] });
    for (int i = 0; i < 3; i++) {
        if (arr[i] == mx) {
            result.push_back(i + 1);
        }
    }
    return result;
}

int main() {

    // TC1
    //vector<int> answers = { 1,2,3,4,5 };

    // TC2
    vector<int> answers = { 1,3,2,4,2 };

    for (int& elem : solution(answers)) {
        printf("%d ", elem);
    }

    return 0;
}