
// 같은 숫자는  싫어
// 구현? 중복제거

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    // 첫 소스코드
    /*
    vector<int> answer;
    if (arr.size() == 0) {
        return {};
    }
    answer.push_back(arr[0]);
    for (int i = 1; i < arr.size(); i++) {
        if (answer.back() != arr[i]) {
            answer.push_back(arr[i]);
        }
    }
    return answer;
    */

    // 뭉쳐져있는 중복 값들을 제거 한다면 erase/unique를 사용해서 제거할 수 있고,
    // 전체적인 배열에서 모든 중복 값들을 제거 한다면 sort를 해서 같은 값을 뭉치게 해 준 다음에
    // erase/unique를 사용해서 중복 제거를 수행한다.

    // 개선된 소스코드
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    return arr;
}

int main() {
    // TC1
    // vector<int> arr = { 1,1,3,3,0,1,1 };

    // TC2
    vector<int> arr = { 4,4,4,3,3 };

    for (int& elem : solution(arr)) {
        printf("%d ", elem);
    }

    return 0;
}